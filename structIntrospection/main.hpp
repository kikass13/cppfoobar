#pragma once

#include <algorithm>
#include <cstring>
#include <tuple>
#include <type_traits>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using size_t = std::size_t;

template <size_t N> struct StringLiteral {
  constexpr StringLiteral(const char (&str)[N]) { std::copy_n(str, N, value); }
  template <typename OtherStringLiteral>
  constexpr bool operator==(const OtherStringLiteral &rhs) const {
    return std::strcmp(rhs.value, value) == 0;
  }
  char value[N];
};

// template <typename F, template <StringLiteral K, typename T> typename Attr,
//           StringLiteral K, typename T>
// static constexpr void attributeDescription(F f, Attr<K, T> &attr) {
// //    if constexpr (std::is_floating_point<
// //                         typename Attr<K, T>::internalType>::value) {
// //         t = 'f';
// //       } else if constexpr (std::is_integral<
// //                                typename Attr<K, T>::internalType>::value) {
// //         t = 'i';
// //       } else if constexpr (std::is_array<
// //                                typename Attr<K, T>::internalType>::value) {
// //         t = 'a';
// //       }   
//     attr.attributes(f);
// }

/// ##################################################

template <StringLiteral K, typename T> struct Attribute {
  using internalType = T;
  static constexpr size_t getSize() { return sizeof(T); }
  const char *key() const { return K.value; }
  const void attributes(auto &&f) {
    if constexpr (std::is_standard_layout<T>::value) {
      /// simple type
      auto size = getSize();
      char s[5];
      sprintf(s, "%ld", size);
      char t = 'u';
      if constexpr (std::is_floating_point<internalType>::value) {
        t = 'f';
      } else if constexpr (std::is_integral<internalType>::value) {
        t = 'i';
      } else if constexpr (std::is_array<internalType>::value) {
        t = 'a';
      }
      f("(", key(), ":", s, ":", t, ")");
      return;
    }
    else{
        /// complex type
        T complex;
        complex.attributes(f);
    }
  }
};

template <StringLiteral K, typename... Attributes> class Object {
public:
  const void attributes(auto &&f) {
    f("{", K.value, ":");
    using Ft = std::remove_reference<decltype(f)>::type;
    std::apply(
        [f](auto &&...a) {
          // using At = typename std::remove_reference<decltype(a)>::value;
          (a.attributes(f), ...);
        },
        attrs);
    f("}");
  }

private:
  std::tuple<Attributes...> attrs =
      std::apply([](auto &&...args) { return std::make_tuple(args...); },
                 std::tuple<Attributes...>{});
};

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
struct Xaxa : Object<"Xaxa", Attribute<"sub", Sub>> {
  Sub s;
};