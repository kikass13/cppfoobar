#pragma once

#include <algorithm>
#include <cstring>
#include <tuple>
#include <type_traits>
#include <utility>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

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
    return std::strcmp(rhs.buf, buf) == 0;
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
    ss[1 + sslen] = ',';
    ss[2 + sslen] = '\0';
    constexpr_strcpy(&t[d + 1], ss);
    end = constexpr_strlen(t);
    using arrElemType = element_type_t<T>;
    typeChar<arrElemType>(t, end);
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
    t[d] = '*';
  }
  // end string depending on added length
  auto tEnd = constexpr_strlen(t);
  t[tEnd] = '\0';
}

template <StringLiteral K, size_t Bits> struct Field {
  static constexpr void encode(auto &&f) {
    f(K, "/", num_to_string<Bits>::value, ",");
  }
};

template <typename... Fields> class BitField {
public:
  template <typename RWOVERWRITE>
  static constexpr void encode(auto &&f) {
    f("bits:", num_to_string<sizeof(fields)>::value, ":");
    std::apply([f](auto &&...field) { (field.encode(f), ...); }, fields);
  }
  static constexpr std::tuple<Fields...> fields{};
};

struct ObjectNoSerialize;
struct ObjectRead;
struct ObjectReadWrite;

template <StringLiteral K, typename T> class Attribute {
public:
  using internalType = T;
  static constexpr const char *key() { return K; }

  /// this RWOVERWRITE is only useful, when the attribute itself is an object
  /// because the object does not have a RW modifier (as it is nested inside the rw modifier o the parent type)
  /// so we just forward it here, so that child attributes are correctly parsed
  template<typename RWOVERWRITE=ObjectNoSerialize> 
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
      // / is the complex thing derived from Object?
      constexpr bool x = requires(T && t, decltype(f) f) {
        t.template encode<0>(f);
      };
      if constexpr (x) {
        /// We can instantiate it and look further
        T complex;
        complex.template encode<0, K, RWOVERWRITE>(f);
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
  template <size_t I, StringLiteral KEY = K, typename RW = ObjectNoSerialize>
  static constexpr void encode(auto &&f) {
    if constexpr (std::is_same<RW, ObjectNoSerialize>::value) {
      return;
    }
    char dir[3] = {'r', 0, 0};
    if constexpr (std::is_same<RW, ObjectReadWrite>::value) {
      dir[1] = 'w';
    }
    f(" {", KEY, ":", dir, " ");
    std::tuple<Attributes...> attrs;
    // char ss[4];
    // auto sslen = constexpr_strcpy(ss, num_to_string<sizeof(attrs)>::value);
    // f(" {", KEY, ":", dir, " :::", ss, "::: ");
    std::apply([f](auto &&...a) { (a.template encode<RW>(f), ...); }, attrs);
    f("} ");
  }
};

template <typename T> class DefaultObjectWrapper {
public:
  template <size_t I, StringLiteral KEY, typename RW = ObjectNoSerialize>
  static constexpr void encode(auto &&f) {
    if constexpr (std::is_same<RW, ObjectNoSerialize>::value) {
      return;
    }
    char dir[3] = {'r', 0, 0};
    if constexpr (std::is_same<RW, ObjectReadWrite>::value) {
      dir[1] = 'w';
    }
    char t[30];
    constexpr_memset(t, '\0', sizeof(t));
    typeChar<T>(t, 0);
    f(" { ", KEY, ":", dir, " data:", num_to_string<sizeof(T)>::value, ":", t,
      " }");
  }

  template <size_t I> static constexpr void encode(auto &&f) {
    char t[30];
    constexpr_memset(t, '\0', sizeof(t));
    typeChar<T>(t, 0);
    f(" { D", num_to_string<I>::value,
      " data:", num_to_string<sizeof(T)>::value, ":", t, " }");
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
#pragma pack(push, 1)
struct Human : Object<"Human", Attribute<"age", int>,
                      Attribute<"name", char[20]>, Attribute<"r", R>> {
  int age = 0;
  char name[20] = "";
  R r = R::NONE;
};
#pragma pack(push, 1)
struct Developer : Object<"Developer", Attribute<"commits", unsigned int>,
                          Attribute<"motivation", int>> {
  unsigned int commits = 0;
  int motivation = 0;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Sub : Object<"Sub", Attribute<"a", int>, Attribute<"b", unsigned long>> {
  int a = 0xff;
  unsigned long b = 0xaa;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Sub2 : Object<"Sub2", Attribute<"arr", int[8]>> {
  int arr[8] = {0, 1, 2, 3, 4, 5, 6, 7};
};
#pragma pack(pop)

using Arr = std::array<std::array<uint16_t, 8>, 10>;
using ArrArrArr = std::array<std::array<std::array<float, 5>, 2>, 10>;
#pragma pack(push, 1)
struct Xaxa : Object<"Xaxa", Attribute<"sub", Sub>, Attribute<"some", int[5]>,
                     Attribute<"arrarr", Arr>, Attribute<"sub2", Sub2>,
                     Attribute<"arararar", ArrArrArr>> {
  Sub s;
  int some[5];
  Arr arrarr;
  Sub2 sub2;
  ArrArrArr arararar;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct UNKNOWN {
  int a = 0x0a;
  unsigned long b = 0x0b;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct A : Object<"A", Attribute<"v", int>> {
  int v = 1337;
};
#pragma pack(pop)
#pragma pack(push, 1)
struct B : Object<"B", Attribute<"a", A>> {
  A a;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct Flags
    : Object<"Flags", BitField<Field<"a", 1>, Field<"b", 1>, Field<"c", 1>,
                               Field<"d", 1>, Field<"e", 1>, Field<"f", 3>>> {
  uint8_t a : 1;
  uint8_t b : 1;
  uint8_t c : 1;
  uint8_t d : 1;
  uint8_t e : 1;
  uint8_t f : 3;
};
#pragma pack(pop)
