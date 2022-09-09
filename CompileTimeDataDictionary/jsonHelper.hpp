#pragma once

#include <string>

#define UQM "\""

namespace json {

template <typename K, typename T> class JAttribute {
public:
  JAttribute(K key, T val) : key{key}, val{val} {}
  JAttribute(const std::pair<K, T> &pair) : key{pair.first}, val{pair.second} {}

  std::string operator()() const {
    std::string buf;
    std::string kstr = key;
    buf += UQM + kstr + UQM + ":";
    if constexpr (std::is_integral_v<T>) {
      buf += UQM + std::to_string(val) + UQM;
    } else {
      buf += val.toJstring();
    }
    return buf;
  }

  K key;
  T val;
};

template <typename... Args> static std::string JObject(const Args &&...args) {
  std::string buf;
  buf += "{";
  apply([&](auto &&...a) { ((buf = buf + a() + ","), ...); },
        std::tie(args...));
  buf.pop_back();
  buf += "}";
  return buf;
}

template <typename K, typename T>
JAttribute<K, T> createJAttribute(const K &key, const T &val) {
  return JAttribute<K, T>{key, val};
}

} // namespace json