
#pragma once

#include <algorithm>
#include <cstring>
#include <tuple>
#include <type_traits>

#include "main.hpp"

#include <iostream>

namespace details {
template <StringLiteral T, class A, StringLiteral B> constexpr bool check() {
  return T == B;
}

template <StringLiteral T,
          template <typename, StringLiteral, typename RW> typename Head,
          typename A, StringLiteral B, typename RW, typename... Tail>
constexpr auto
get_element_based_on_2nd_entry(std::tuple<Head<A, B, RW>, Tail...> &t) {
  if constexpr (check<T, A, B>()) {
    return std::get<Head<A, B, RW>>(t);
  } else {
    auto newTuple = std::apply(
        [](auto && /*e1*/, auto &&...args) { return std::make_tuple(args...); },
        t);
    return get_element_based_on_2nd_entry<T>(newTuple);
  }
}

template <typename... IOs> constexpr auto get_keys_from_ios() {
  std::tuple<IOs...> t{};
  return std::apply([&](auto &&...io) { return std::make_tuple(io.key()...); },
                    t);
}

template <typename tuple_t, typename F>
constexpr auto get_array_from_tuple(tuple_t &&t, F &&f) {
  auto get_array = [&](auto &&...x) { return std::array{f(x)...}; };
  return std::apply(get_array, t);
}

} // namespace details

template <class T, StringLiteral K, class RW = ObjectNoSerialize> class IO {
public:
  using Direction = RW;
  constexpr IO() : data_{} {}
  constexpr ~IO(){};
  // void set(const T &d) { data_ = d; }
  // const T &get() { return data_; }
  static constexpr auto key() { return K.buf; }
  bool static constexpr isReadable() {
    return !std::is_same_v<Direction, ObjectNoSerialize>;
  }
  bool static constexpr isWriteable() {
    return std::is_same_v<Direction, ObjectReadWrite>;
  }
  template <size_t I> static constexpr void encode(auto f) {
    using FType = decltype(f);
    constexpr bool x = requires(T && t, FType f) {
      t.template encode<I, K>(f);
    };
    if constexpr (x) {
      /// encode type info of IO attribute as Object defined by T
      return T::template encode<I, K, RW>(f);
    } else {
      /// encode type info of IO attribute as DefaultGarbageObject defined by T
      return DefaultObjectWrapper<T>::template encode<I, K, RW>(f);
    }
  }
  T data_;
};

template <class... IOs> class IOList {
public:
  constexpr IOList() {}
  template <typename T, StringLiteral K> const auto &get() {
    return std::get<IO<T, K>>(ios_).data_;
  }
  template <StringLiteral K> const auto &get() {
    auto someIO = details::get_element_based_on_2nd_entry<K>(ios_);
    /// someIO will be a copy of the tuple element with the correct
    /// type we need to get our correct ref with that type
    return std::get<decltype(someIO)>(ios_).data_;
  }
  template <typename T, StringLiteral K> void set(const auto &v) {
    std::get<IO<T, K>>(ios_).data_ = v;
  }
  template <StringLiteral K> void set(const auto &v) {
    auto someIO = details::get_element_based_on_2nd_entry<K>(ios_);
    /// someIO will be a copy of the tuple element with the
    /// correct type we need to get our correct ref with that type
    std::get<decltype(someIO)>(ios_).data_ = v;
  }

  constexpr auto keys() {
    auto keyTuple = details::get_keys_from_ios<IOs...>();
    return details::get_array_from_tuple(keyTuple, [](auto k) { return k; });
  }

  static constexpr auto getTypeString() { return typeStringBuf.get(); }
  static constexpr auto getTypeStringSize() { return typeStringSize; }

  // void printContents() {
  //   std::apply(
  //       [](auto &&...io) {
  //         ((std::cout << io.key() << ": " << sizeof(decltype(io.data_)) <<
  //         std::endl), ...);
  //       },
  //       ios_);
  // }

  // size_t size() const {
  //   size_t c = 0;
  //   std::apply([&c](auto &&...io) { ((c += sizeof(decltype(io.data_))), ...);
  //   },
  //              ios_);
  //   return c;
  // }
  static constexpr size_t size() {
    // size_t c = 0;
    // auto t = std::tuple<IOs...>{};
    // std::apply([&c](auto &&...io) { ((c += sizeof(decltype(io.data_))), ...);
    // },
    //            t);
    // return c;
    return sizeof(std::tuple<IOs...>);
  }
  static constexpr size_t sizeOfReadableIos() {
    return sizeof(ReadableIosByExteral);
  }
  static constexpr size_t sizeOfWritableIos() {
    return sizeof(WritableIosByExternal);
  }

  const char *data() const {
    const char *ptr = reinterpret_cast<const char *>(std::get<0>(ios_));
    return ptr;
  }

  size_t pack(char *dest) {
    size_t c = 0;
    /// when reading everything is possible
    // std::apply([&](auto &&...io) { ((pack_(dest, c, io)), ...); }, ios_);
    /// when only defined ios can be read
    ReadableIosByExteral external{};
    std::apply([&](auto &&...io) { ((pack_(dest, c, io)), ...); }, external);
    return c;

  }
  size_t unpack(char *dest) {
    size_t c = 0;
    WritableIosByExternal external{};
    std::apply([&](auto &&...io) { ((unpack_(dest, c, io)), ...); }, external);
    return c;
  }

private:
  void pack_(char *dest, size_t &c, auto &&io) {
    static constexpr size_t size = sizeof(io.data_);
    using TargetIoType = std::remove_reference_t<decltype(io)>;
    auto targetIos = &std::get<TargetIoType>(ios_);
    std::cout << "pack: " << targetIos->key() << " [" << size << "] at " << c << std::endl;
    if constexpr (TargetIoType::isReadable()){
      std::memcpy(&dest[c], &io.data_, size);
      c += size;
    }
  }

  void unpack_(char *dest, size_t &c, auto &&io) {
    static constexpr size_t size = sizeof(io.data_);
    using TargetIoType = std::remove_reference_t<decltype(io)>;
    auto targetIos = &std::get<TargetIoType>(ios_);
    std::cout << "unpack: " << targetIos->key() << " [" << size << "] at " << c
              << std::endl;
    std::memcpy(targetIos, &dest[c], size);
    c += size;
  }

  static constexpr auto getWriteableIos(auto /*t*/) {
    return std::make_tuple();
  }
  template <typename Head, typename... Tail>
  static constexpr auto getWriteableIos(std::tuple<Head, Tail...> t) {
    auto newTuple = std::apply(
        [](auto && /*e1*/, auto &&...args) { return std::make_tuple(args...); },
        t);
    if constexpr (Head::isWriteable()) {
      auto ioTuple = std::make_tuple(std::get<Head>(t));
      return std::tuple_cat(ioTuple, getWriteableIos(newTuple));
    }
    else{
      return std::tuple_cat(getWriteableIos(newTuple));
    }
  }

  static constexpr auto getReadableIos(auto /*t*/) { return std::make_tuple(); }
  template <typename Head, typename... Tail>
  static constexpr auto getReadableIos(std::tuple<Head, Tail...> t) {
    auto newTuple = std::apply(
        [](auto && /*e1*/, auto &&...args) { return std::make_tuple(args...); },
        t);
    if constexpr (Head::isReadable()) {
      auto ioTuple = std::make_tuple(std::get<Head>(t));
      return std::tuple_cat(ioTuple, getReadableIos(newTuple));
    }
    else{
      return std::tuple_cat(getReadableIos(newTuple));    
    }
  }

  static constexpr auto generateWritableIos() {
    std::tuple<IOs...> t{};
    auto result = getWriteableIos(t);
    return result;
  }
  static constexpr auto generateReadableIos() {
    std::tuple<IOs...> t{};
    auto result = getReadableIos(t);
    return result;
  }

private:
  static constexpr auto typeStringBuf =
      createTypeString<std::tuple<IOs...>, 5000>();
  static constexpr auto typeStringSize = constexpr_strlen(getTypeString());
  std::tuple<IOs...> ios_;
  using ReadableIosByExteral = decltype(generateReadableIos());
  using WritableIosByExternal = decltype(generateWritableIos());
};

typedef IOList<> NoIOs;
