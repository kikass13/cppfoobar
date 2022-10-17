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

static constexpr void attributeDescription(auto &&f, auto &&attr) {
  auto size = attr.getSize();
  char s[5];
  sprintf(s, "%ld", size);
  f("(", attr.key(), ":", s, ")");
}

/// ##################################################

template <StringLiteral K, typename T> struct Attribute {
  using t = T;
  static constexpr size_t getSize() { return sizeof(T); }

  const char *key() const { return K.value; }
};

template <StringLiteral K, typename... Attributes> class Object {
public:
  const void attributes(auto &&f) {
    f("{", K.value, ":");
    std::apply([&f](auto &&...a) { (attributeDescription(f, a), ...); }, attrs);
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