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

/// ##################################################

template <typename T> static constexpr void typeChar(char *t, size_t d) {
  t[d] = '0';
  if constexpr (std::is_floating_point<T>::value) {
    t[d] = 'f';
  } else if constexpr (std::is_integral<T>::value) {
    t[d] = 'i';
  } else if constexpr (std::is_array<T>::value) {
    T arr{};
    using arrElemType = std::remove_reference<decltype(*arr)>::type;
    t[d] = 'a';
    typeChar<arrElemType>(t, d + 1);
    t[d + 2] = '\0';
  }
  else{
    t[d] = '?';
  }
}

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
      s[sizeof(s) - 1] = '\0';
      char t[10];
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

using Arr = std::array<std::array<uint8_t, 5>, 10>;
struct Xaxa : Object<"Xaxa", Attribute<"sub", Sub>, Attribute<"arrarr", Arr>> {
  Sub s;
  Arr arr;
};