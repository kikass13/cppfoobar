#pragma once

#include <algorithm>
#include <cstring>
#include <tuple>
#include <type_traits>
#include <utility>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "compileTimeCounter.hpp"
using size_t = std::size_t;

template <typename T>
using element_type_t =
    std::remove_reference_t<decltype(*std::begin(std::declval<T &>()))>;
template <typename E> constexpr auto to_underlying(E e) noexcept {
  return static_cast<std::underlying_type_t<E>>(e);
}

/////////////////////////////////////////////////////////////////////
/// from:
/// https://stackoverflow.com/questions/2033110/passing-a-string-literal-as-a-type-argument-to-a-class-template
/////////////////////////////////////////////////////////////////////
template <unsigned N> struct StringLiteral {
  char buf[N + 1]{};
  constexpr StringLiteral(char const *src) {
    { std::copy_n(src, N, buf); }
  }
  template <typename OtherStringLiteral>
  constexpr bool operator==(const OtherStringLiteral &rhs) const {
    return std::strcmp(rhs.value, buf) == 0;
  }
  constexpr operator char const *() const { return buf; }
};
template <unsigned N> StringLiteral(char const (&)[N]) -> StringLiteral<N - 1>;

/////////////////////////////////////////////////////////////////////

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

// Copy src to dest, and return the number of copied characters
constexpr int constexpr_strcpy(char *dest, const char *src) {
  int n = 0;
  while ((*(dest++) = *(src++))) {
    n++;
  }
  return n;
}
// Returns the len of str without the null term
constexpr int constexpr_strlen(const char *str) {
  int n = 0;
  while (*str) {
    str++;
    n++;
  }
  return n;
}
// Sets str to value
constexpr void constexpr_memset(char *str, auto val, auto size) {
  int n = 0;
  for (unsigned i = 0; i < size; i++) {
    *str = val;
    str++;
  }
}

/// from:
/// https://stackoverflow.com/questions/23999573/convert-a-number-to-a-string-literal-with-constexpr
template <unsigned... digits> struct to_chars { static const char value[]; };
template <unsigned... digits>
constexpr char to_chars<digits...>::value[] = {('0' + digits)..., 0};
template <unsigned rem, unsigned... digits>
struct explode : explode<rem / 10, rem % 10, digits...> {};
template <unsigned... digits>
struct explode<0, digits...> : to_chars<digits...> {};
template <unsigned num> struct num_to_string : explode<num> {};

/// ##################################################
/// ##################################################
/// ##################################################
/// ##################################################
/// ##################################################
/// ##################################################

template <size_t N> class Buf {
public:
  constexpr void copy(const char *src) {
    auto size = constexpr_strcpy(&buf[j], src);
    j += size;
    buf[j] = '\0';
  }
  constexpr void push(auto c) { buf[j++] = c; }
  constexpr const char *get() const { return buf; }
  constexpr const char *data() const { return buf; }
  constexpr char *consume() {
    clear();
    return buf;
  }
  constexpr size_t size() { return j; }
  constexpr void clear() { j = 0; }

private:
  char buf[N];
  int j = 0;
};

/*
https://docs.python.org/3/library/struct.html
*/

template <typename T> static constexpr void typeChar(char *t, size_t d) {
  t[d] = '0';
  int end = d + 1;
  if constexpr (std::is_floating_point<T>::value) {
    if constexpr (sizeof(T) <= 4) {
      t[d] = 'f';
    } else if (sizeof(T) == 8) {
      t[d] = 'd';
    }
  } else if constexpr (std::is_integral<T>::value) {
    if constexpr (std::is_unsigned<T>::value) {
      if constexpr (sizeof(T) == 1) {
        t[d] = 'B';
      } else if (sizeof(T) == 2) {
        t[d] = 'H';
      } else if (sizeof(T) == 4) {
        t[d] = 'I';
      } else if (sizeof(T) == 8) {
        t[d] = 'Q';
      }
    } else {
      if constexpr (sizeof(T) == 1) {
        t[d] = 'b';
      } else if (sizeof(T) == 2) {
        t[d] = 'h';
      } else if (sizeof(T) == 4) {
        t[d] = 'i';
      } else if (sizeof(T) == 8) {
        t[d] = 'q';
      }
    }
  } else if constexpr (std::is_enum<T>::value) {
    using TT = decltype(to_underlying(T{}));
    /// we dont need to know that this is an enum
    // t[d] = 'e';
    typeChar<TT>(t, d);
  } else if constexpr (std::is_array<T>::value) {
    t[d] = 'a';
    T arr{};
    constexpr auto size = sizeof_array<T>(arr);
    char ss[10];
    ss[0] = '/';
    auto sslen = constexpr_strcpy(&ss[1], num_to_string<size>::value);
    constexpr_strcpy(&t[1], ss);
    end = constexpr_strlen(t);
    using arrElemType = std::remove_reference<decltype(*arr)>::type;
    typeChar<arrElemType>(&t[end], d + 1);
  } else if constexpr (notstd::is_array<T>::value) {
    t[d] = 'A';
    constexpr auto size = std::tuple_size_v<T>;
    char ss[10];
    ss[0] = '/';
    auto sslen = constexpr_strcpy(&ss[1], num_to_string<size>::value);
    ss[1 + sslen] = ',';
    ss[2 + sslen] = '\0';
    constexpr_strcpy(&t[d + 1], ss);
    end = constexpr_strlen(t);
    using arrElemType = element_type_t<T>;
    typeChar<arrElemType>(t, end);
  } else {
    t[d] = '?';
  }
  // end string depending on added length
  auto tEnd = constexpr_strlen(t);
  t[tEnd] = '\0';
}

template <StringLiteral K, typename T> class Attribute {
  static constexpr char const *k = K;

public:
  using internalType = T;
  static constexpr const char *key() { return k; }
  static constexpr void encode(auto &&f) {
    if constexpr (!is_complex_datatype<T>::value) {
      /// simple type
      char ss[10];
      auto sslen = constexpr_strcpy(ss, num_to_string<sizeof(T)>::value);
      // sprintf(s, "%ld", size);
      // ss[sslen] = '\0';
      char t[30];
      constexpr_memset(t, '\0', sizeof(t));
      typeChar<internalType>(t, 0);
      f(key(), ":", ss, ":", t, " ");
      return;
    } else {
      /// is the complex thing derived from Object?
      constexpr bool x = requires(T && t, decltype(f) f) { t.encode(f); };
      if constexpr (x) {
        /// We can instantiate it and look further
        T complex;
        complex.encode(f);
      } else {
        /// this is a garbage placeholder type
        char t[2] = {'*', '\0'};
        char ss[10];
        auto sslen = constexpr_strcpy(ss, num_to_string<sizeof(T)>::value);
        // sprintf(s, "%ld", size);
        // ss[sslen] = '\0';
        f(key(), ":", ss, ":", t, " ");
      }
    }
  }
};

template <StringLiteral K, typename... Attributes> class Object {
  static constexpr char const *k = K;

public:
  // static constexpr const char *key() { return k; }
  template <size_t I, StringLiteral KEY = K> static constexpr void encode(auto &&f) {
    f(" {", KEY, " ");
    std::tuple<Attributes...> attrs;
    std::apply([f](auto &&...a) { (a.encode(f), ...); }, attrs);
    f("} ");
  }
};

template <typename T> class DefaultObjectWrapper {
public:
  template <size_t I> static constexpr void encode(auto &&f) {
    f(" { ?", num_to_string<I>::value,
      " data:", num_to_string<sizeof(T)>::value, ":? }");
  }
};

template <std::size_t I = 0, typename... Ts>
static constexpr void call_attributes_for_each_type(auto &&out,
                                                    std::tuple<Ts...> tup) {
  if constexpr (I == sizeof...(Ts)) {
    return;
  } else {
    callAtributesOnObject<I>(std::get<I>(tup), out);
    call_attributes_for_each_type<I + 1>(out, tup);
  }
}

template <size_t I>
static constexpr void callAtributesOnObject(auto o, auto out) {
  constexpr bool x = requires(decltype(o) o, decltype(out) out) {
    o.template encode<I>(out);
  };
  if constexpr (x) {
    o.template encode<I>(out);
  } else {
    DefaultObjectWrapper<decltype(o)> wrapper;
    wrapper.template encode<I>(out);
  }
};

template <typename TypeTuple, size_t N>
static constexpr auto createTypeString() {
  Buf<N> buf;
  buf.push('{');
  auto out = [&buf]<typename... Args>(Args... args) {
    std::apply([&buf](auto &&...xs) { ((buf.copy(xs)), ...); },
               std::tie(args...));
  };
  TypeTuple t{};
  /// apply does not provide a running index
  // std::apply([&](auto &&...o) { (call(o, out), ...); }, t);
  /// use self made tuple iterator for that
  call_attributes_for_each_type(out, t);
  buf.push('}');
  return buf;
}

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

struct Sub : Object<"Sub", Attribute<"a", int>, Attribute<"b", unsigned long>> {
  int a = 0;
  unsigned long b = 0;
};
struct Sub2 : Object<"Sub2", Attribute<"arr", int>> {
  std::array<int, 8> arr;
};

using Arr = std::array<std::array<uint16_t, 8>, 10>;
using ArrArrArr = std::array<std::array<std::array<float, 5>, 2>, 10>;
struct Xaxa : Object<"Xaxa", Attribute<"sub", Sub>, Attribute<"some", int[5]>,
                     Attribute<"arrarr", Arr>, Attribute<"sub2", Sub2>,
                     Attribute<"arararar", ArrArrArr>> {
  Sub s;
  int some[5];
  Arr arrarr;
  Sub2 sub2;
  ArrArrArr arararar;
};

struct UNKNOWN {
  int a = 0;
  unsigned long b = 0;
};
