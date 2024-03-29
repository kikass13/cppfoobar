#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <tuple>
#include <type_traits>

static constexpr unsigned int crc_table[256] = {
    0x00000000, 0x77073096, 0xee0e612c, 0x990951ba, 0x076dc419, 0x706af48f,
    0xe963a535, 0x9e6495a3, 0x0edb8832, 0x79dcb8a4, 0xe0d5e91e, 0x97d2d988,
    0x09b64c2b, 0x7eb17cbd, 0xe7b82d07, 0x90bf1d91, 0x1db71064, 0x6ab020f2,
    0xf3b97148, 0x84be41de, 0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7,
    0x136c9856, 0x646ba8c0, 0xfd62f97a, 0x8a65c9ec, 0x14015c4f, 0x63066cd9,
    0xfa0f3d63, 0x8d080df5, 0x3b6e20c8, 0x4c69105e, 0xd56041e4, 0xa2677172,
    0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b, 0x35b5a8fa, 0x42b2986c,
    0xdbbbc9d6, 0xacbcf940, 0x32d86ce3, 0x45df5c75, 0xdcd60dcf, 0xabd13d59,
    0x26d930ac, 0x51de003a, 0xc8d75180, 0xbfd06116, 0x21b4f4b5, 0x56b3c423,
    0xcfba9599, 0xb8bda50f, 0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924,
    0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d, 0x76dc4190, 0x01db7106,
    0x98d220bc, 0xefd5102a, 0x71b18589, 0x06b6b51f, 0x9fbfe4a5, 0xe8b8d433,
    0x7807c9a2, 0x0f00f934, 0x9609a88e, 0xe10e9818, 0x7f6a0dbb, 0x086d3d2d,
    0x91646c97, 0xe6635c01, 0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e,
    0x6c0695ed, 0x1b01a57b, 0x8208f4c1, 0xf50fc457, 0x65b0d9c6, 0x12b7e950,
    0x8bbeb8ea, 0xfcb9887c, 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3, 0xfbd44c65,
    0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2, 0x4adfa541, 0x3dd895d7,
    0xa4d1c46d, 0xd3d6f4fb, 0x4369e96a, 0x346ed9fc, 0xad678846, 0xda60b8d0,
    0x44042d73, 0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9, 0x5005713c, 0x270241aa,
    0xbe0b1010, 0xc90c2086, 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f,
    0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4, 0x59b33d17, 0x2eb40d81,
    0xb7bd5c3b, 0xc0ba6cad, 0xedb88320, 0x9abfb3b6, 0x03b6e20c, 0x74b1d29a,
    0xead54739, 0x9dd277af, 0x04db2615, 0x73dc1683, 0xe3630b12, 0x94643b84,
    0x0d6d6a3e, 0x7a6a5aa8, 0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1,
    0xf00f9344, 0x8708a3d2, 0x1e01f268, 0x6906c2fe, 0xf762575d, 0x806567cb,
    0x196c3671, 0x6e6b06e7, 0xfed41b76, 0x89d32be0, 0x10da7a5a, 0x67dd4acc,
    0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5, 0xd6d6a3e8, 0xa1d1937e,
    0x38d8c2c4, 0x4fdff252, 0xd1bb67f1, 0xa6bc5767, 0x3fb506dd, 0x48b2364b,
    0xd80d2bda, 0xaf0a1b4c, 0x36034af6, 0x41047a60, 0xdf60efc3, 0xa867df55,
    0x316e8eef, 0x4669be79, 0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236,
    0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f, 0xc5ba3bbe, 0xb2bd0b28,
    0x2bb45a92, 0x5cb36a04, 0xc2d7ffa7, 0xb5d0cf31, 0x2cd99e8b, 0x5bdeae1d,
    0x9b64c2b0, 0xec63f226, 0x756aa39c, 0x026d930a, 0x9c0906a9, 0xeb0e363f,
    0x72076785, 0x05005713, 0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38,
    0x92d28e9b, 0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21, 0x86d3d2d4, 0xf1d4e242,
    0x68ddb3f8, 0x1fda836e, 0x81be16cd, 0xf6b9265b, 0x6fb077e1, 0x18b74777,
    0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c, 0x8f659eff, 0xf862ae69,
    0x616bffd3, 0x166ccf45, 0xa00ae278, 0xd70dd2ee, 0x4e048354, 0x3903b3c2,
    0xa7672661, 0xd06016f7, 0x4969474d, 0x3e6e77db, 0xaed16a4a, 0xd9d65adc,
    0x40df0b66, 0x37d83bf0, 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9,
    0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6, 0xbad03605, 0xcdd70693,
    0x54de5729, 0x23d967bf, 0xb3667a2e, 0xc4614ab8, 0x5d681b02, 0x2a6f2b94,
    0xb40bbe37, 0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d};

template <int size, int idx = 0, class dummy = void> struct MM {
  static constexpr unsigned int crc32(const char *str,
                                      unsigned int prev_crc = 0xFFFFFFFF) {
    return MM<size, idx + 1>::crc32(
        str, (prev_crc >> 8) ^ crc_table[(prev_crc ^ str[idx]) & 0xFF]);
  }
};

// This is the stop-recursion function
template <int size, class dummy> struct MM<size, size, dummy> {
  static constexpr unsigned int crc32(const char * /*str*/,
                                      unsigned int prev_crc = 0xFFFFFFFF) {
    return prev_crc ^ 0xFFFFFFFF;
  }
};

#define COMPILE_TIME_CRC32_STR(x) (MM<sizeof(x) - 1>::crc32(x))

/// Literal class type that wraps a constant expression string.
/// Uses implicit conversion to allow templates to *seemingly* accept
/// constant strings.
///   -
///   https://ctrpeach.io/posts/cpp20-string-literal-template-parameters/
template <size_t N> struct StringLiteral {
  constexpr StringLiteral(const char (&str)[N]) : hash{COMPILE_TIME_CRC32_STR(str)} { std::copy_n(str, N, value); }
  template <typename OtherStringLiteral>
  constexpr bool operator==(const OtherStringLiteral &rhs) const {
    // return std::strcmp(rhs.value, value) == 0;
    return rhs.hash == hash;
  }
  char value[N];
  unsigned int hash;
};

namespace details {
template <StringLiteral T, class A, StringLiteral B> constexpr bool check() {
  return T == B;
}

template <StringLiteral T, template <typename, StringLiteral> typename Head,
          typename A, StringLiteral B, typename... Tail>
constexpr auto
get_element_based_on_2nd_entry(std::tuple<Head<A, B>, Tail...> &t) {
  if constexpr (check<T, A, B>()) {
    return std::get<Head<A, B>>(t);
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

template <class T, StringLiteral K> class IO {
public:
  IO() : data_{} {}
  ~IO(){};
  void set(const T &d) { data_ = d; }
  const T &get() { return data_; }
  const char *key() const { return K.value; }
  T data_;
};

template <class... IOs> class IOList {
public:
  template <typename T, StringLiteral K> const auto &get() {
    return std::get<IO<T, K>>(ios_).get();
  }
  template <StringLiteral K> const auto &get() {
    auto someIO = details::get_element_based_on_2nd_entry<K>(ios_);
    /// someIO will be a copy of the tuple element with the correct
    /// type we need to get our correct ref with that type
    return std::get<decltype(someIO)>(ios_).get();
  }
  template <typename T, StringLiteral K> void set(const auto &v) {
    std::get<IO<T, K>>(ios_).set(v);
  }
  template <StringLiteral K> void set(const auto &v) {
    auto someIO = details::get_element_based_on_2nd_entry<K>(ios_);
    /// someIO will be a copy of the tuple element with the
    /// correct type we need to get our correct ref with that type
    std::get<decltype(someIO)>(ios_).set(v);
  }

  constexpr auto keys() {
    auto keyTuple = details::get_keys_from_ios<IOs...>();
    return details::get_array_from_tuple(keyTuple, [](auto k) { return k; });
  }

private:
  std::tuple<IOs...> ios_;
};

int main() {

  IOList<
    IO<int, "var1">, 
    IO<int, "var2">, 
    IO<int, "var3">, 
    IO<int, "var4">, 
    IO<int, "var5">, 
    IO<int, "var6">, 
    IO<int, "var7">, 
    IO<int, "var8">, 
    IO<int, "var9">, 
    IO<int, "var10">, 
    IO<int, "var11">, 
    IO<int, "var12">, 
    IO<int, "var13">, 
    IO<int, "var14">, 
    IO<int, "var15">, 
    IO<int, "var16">, 
    IO<int, "var17">, 
    IO<int, "var18">, 
    IO<int, "var19">, 
    IO<int, "var20">, 
    IO<int, "var21">, 
    IO<int, "var22">, 
    IO<int, "var23">, 
    IO<int, "var24">, 
    IO<int, "var25">, 
    IO<int, "var26">, 
    IO<int, "var27">, 
    IO<int, "var28">, 
    IO<int, "var29">, 
    IO<int, "var30">, 
    IO<int, "var31">, 
    IO<int, "var32">, 
    IO<int, "var33">, 
    IO<int, "var34">, 
    IO<int, "var35">, 
    IO<int, "var36">, 
    IO<int, "var37">
  > ios;

  ios.set<"var1">(12);
  ios.set<"var2">(1337);
  ios.set<"var3">(20000);
  ios.set<"var4">(20000);
  ios.set<"var5">(20000);
  ios.set<"var6">(20000);
  ios.set<"var7">(20000);
  ios.set<"var8">(20000);
  ios.set<"var9">(20000);
  ios.set<"var10">(20000);
  ios.set<"var11">(20000);
  ios.set<"var12">(20000);
  ios.set<"var13">(20000);
  ios.set<"var14">(20000);
  ios.set<"var15">(20000);
  ios.set<"var16">(20000);
  ios.set<"var17">(20000);
  ios.set<"var18">(20000);
  ios.set<"var19">(20000);
  ios.set<"var20">(20000);
  ios.set<"var21">(20000);
  ios.set<"var22">(20000);
  ios.set<"var23">(20000);
  ios.set<"var24">(20000);
  ios.set<"var25">(20000);
  ios.set<"var26">(20000);
  ios.set<"var27">(20000);
  ios.set<"var28">(20000);
  ios.set<"var29">(20000);
  ios.set<"var30">(20000);
  ios.set<"var31">(20000);
  ios.set<"var32">(20000);
  ios.set<"var33">(20000);
  ios.set<"var34">(20000);
  ios.set<"var35">(20000);
  ios.set<"var36">(20000);
  ios.set<"var37">(20000);
  
  std::cout << ios.get<"var3">() << std::endl;
  std::cout << ios.get<"var1">() << std::endl;
  std::cout << ios.get<"var2">() << std::endl;

  return 0;
}
