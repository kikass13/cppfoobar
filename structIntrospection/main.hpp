#pragma once

#include <algorithm>
#include <cstring>
#include <tuple>
#include <type_traits>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using size_t = std::size_t;

template <typename E> constexpr auto to_underlying(E e) noexcept {
  return static_cast<std::underlying_type_t<E>>(e);
}
template <typename T>
using element_type_t =
    std::remove_reference_t<decltype(*std::begin(std::declval<T &>()))>;

template <size_t N> struct StringLiteral {
  constexpr StringLiteral(const char (&str)[N]) { std::copy_n(str, N, value); }
  template <typename OtherStringLiteral>
  constexpr bool operator==(const OtherStringLiteral &rhs) const {
    return std::strcmp(rhs.value, value) == 0;
  }
  char value[N];
};

template <typename T> constexpr auto sizeof_array(const T &iarray) {
  return (sizeof(iarray) / sizeof(iarray[0]));
}

/// from:
/// https://stackoverflow.com/questions/40924276/why-does-stdis-array-return-false-for-stdarray
namespace notstd {
template <class T> struct is_array : std::is_array<T> {};
template <class T, std::size_t N>
struct is_array<std::array<T, N>> : std::true_type {};
// optional:
template <class T> struct is_array<T const> : is_array<T> {};
template <class T> struct is_array<T volatile> : is_array<T> {};
template <class T> struct is_array<T volatile const> : is_array<T> {};
} // namespace notstd

template <typename T>
using is_complex_datatype =
    std::integral_constant<bool, std::is_class<T>::value &&
                                     !notstd::is_array<T>::value>;
/// ##################################################
/// ##################################################
/// ##################################################
/// ##################################################
/// ##################################################
/// ##################################################

template <size_t N> class Buf {
public:
  constexpr void copy(const char *src) {
    auto size = strlen(src);
    sprintf(&buf[j], "%s", src);
    j += size;
    buf[j] = '\0';
  }
  constexpr void push(auto c) { buf[j++] = c; }
  constexpr char *get() { return buf; }
  constexpr char *data() { return buf; }
  constexpr char *consume() {
    clear();
    return buf;
  }
  constexpr size_t size() { return j; }
  constexpr void clear() { j = 0; }

private:
  char buf[N];
  size_t j = 0;
};

template <typename TypeTuple, size_t N>
static constexpr auto createTypeString() {
  Buf<N> buf;
  // std::copy(buf.data(), buf.data()+N, out.begin());
  //   buf.push('a');
  //   buf.push('b');
  //   buf.push('c');
  //   buf.push('d');
  //   buf.push('\0');

  auto out = [&buf]<typename... Args>(Args... args) {
    std::apply(
        [&buf](auto &&...xs) {
          // ((std::cout << std::forward<decltype(xs)>(xs)), ...);
          // ((buf[j++] = xs[0]), ...);
          // ((copyBuf(xs)), ...);
          ((buf.copy(xs)), ...);
        },
        std::tie(args...));
  };
  TypeTuple t{};
  std::apply([&](auto &&...o) { (o.attributes(out), ...); }, t);

  return buf;
}

template <typename T> static constexpr void typeChar(char *t, size_t d) {
  t[d] = '0';
  int end = d+1;
  int sslen = 0;
  if constexpr (std::is_floating_point<T>::value) {
    t[d] = 'f';
  } else if constexpr (std::is_integral<T>::value) {
    t[d] = 'i';
  } else if constexpr (std::is_enum<T>::value) {
    using TT = decltype(to_underlying(T{}));
    /// we dont need to know that this is an enum
    // t[d] = 'e';
    typeChar<TT>(t, d);
    end = strlen(t);
  } else if constexpr (std::is_array<T>::value) {
    t[d] = 'a';
    T arr{};
    using arrElemType = std::remove_reference<decltype(*arr)>::type;
    typeChar<arrElemType>(t, d + 1);
    auto size = sizeof_array<T>(arr);
    end = strlen(t);
    char ss[5];
    sprintf(ss, "/%ld", size);
    sslen = strlen(ss);
    strcpy(&t[end], ss);
  } else if constexpr (notstd::is_array<T>::value) {
    using arrElemType = element_type_t<T>;
    t[d] = 'a';
    typeChar<arrElemType>(t, d + 1);
    auto size = std::tuple_size_v<T>;
    end = strlen(t);
    char ss[5];
    sprintf(ss, "/%ld", size);
    sslen = strlen(ss);
    strcpy(&t[end], ss);
  } else {
    t[d] = '?';
  }
  // end string depending on added length
    t[d + end + sslen] = '\0';
}

template <StringLiteral K, typename T> struct Attribute {
  using internalType = T;
  static constexpr size_t getSize() { return sizeof(T); }
  static constexpr const char *key() { return K.value; }
  static constexpr void attributes(auto &&f) {
    if constexpr (!is_complex_datatype<T>::value) {
      /// simple type
      auto size = getSize();
      char s[5];
      sprintf(s, "%ld", size);
      s[sizeof(s) - 1] = '\0';
      char t[30];
      std::memset(t, '\0', sizeof(t));
      typeChar<internalType>(t, 0);
      t[sizeof(t) - 1] = '\0';
      f("(", key(), ":", s, ":", t, ")");
      return;
    } else {
      /// complex type
      T complex;
      complex.attributes(f);
    }
  }
};

template <StringLiteral K, typename... Attributes> class Object {
public:
  static constexpr void attributes(auto &&f) {
    f("{", K.value, ":");
    std::tuple<Attributes...> attrs;
    std::apply(
        [f](auto &&...a) {
          // using At = typename std::remove_reference<decltype(a)>::value;
          (a.attributes(f), ...);
        },
        attrs);
    f("}");
  }
};

/// ##################################################
/// ##################################################
/// ##################################################
/// ##################################################
/// ##################################################

enum class R : uint8_t { NONE, KAUKASIAN, ASIAN, AFRICAN };
struct Human : Object<"Human", Attribute<"age", int>,
                      Attribute<"name", char[20]>, Attribute<"r", R>> {
  int age = 0;
  char name[20] = "";
  R r = R::NONE;
};

struct Developer : Object<"Developer", Attribute<"commits", unsigned int>,
                          Attribute<"motivation", int>> {
  unsigned int commits = 0;
  int motivation = 0;
};

struct Sub : Object<"Sub", Attribute<"a", int>, Attribute<"b", int>> {
  int a = 0;
  int b = 0;
};
struct Sub2 : Object<"Sub2", Attribute<"arr", int>> {
  std::array<int, 8> arr;
};

using Arr = std::array<std::array<uint16_t, 8>, 10>;
using ArrArrArr = std::array<std::array<std::array<uint8_t, 5>, 2>, 10>;
struct Xaxa : Object<"Xaxa", Attribute<"sub", Sub>, Attribute<"some", int[5]>,
                     Attribute<"arrarr", Arr>, Attribute<"sub2", Sub2>,
                     Attribute<"arararar", ArrArrArr>> {
  Sub s;
  int some[5];
  Arr arr;
  Sub2 sub2;
  ArrArrArr arararar;
};
