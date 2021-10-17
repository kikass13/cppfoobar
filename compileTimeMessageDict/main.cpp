#include <iostream>
#include <string>
#include <tuple>
#include <type_traits>

template <class T, class A, class B> constexpr bool check() {
  return std::is_same_v<B, T>;
}
template <typename T, template <typename, typename> typename Head, typename A,
          typename B, typename... Tail>
auto &get_element_based_on_2nd_entry(std::tuple<Head<A, B>, Tail...> &t) {
//   std::cout << "Checking Element" << typeid(T).name() << ": " << typeid(A).name() << std::endl;
  if constexpr (check<T, A, B>()) {
    // std::cout << " + returning tuple Element" << typeid(T).name() << ": " << typeid(A).name() << std::endl;
    return std::get<Head<A, B>>(t);
  } else {
    auto &&newTuple = std::apply(
        [](auto &&e1, auto &&... args) { return std::make_tuple(args...); }, t);
    return get_element_based_on_2nd_entry<T>(newTuple);
  }
}

#define KEY(x) decltype(x##_K)

template <char... chars> using Kstring = std::integer_sequence<char, chars...>;
template <typename T, T... chars> constexpr Kstring<chars...> operator""_K() {
  return {};
}
using Key = const char *;

template <class T, typename K> class IO;
template <class... IOS> class IOList {
public:
  template <typename T, typename K> const auto &get() {
    return std::get<IO<T, K>>(ios_).get();
  }
  template <typename K> const auto &get() {
    auto someIO = get_element_based_on_2nd_entry<K>(ios_);
    /// someIO will be a copy of the tuple element with the correct type
    /// we need to get our correct ref with that type
    return std::get<decltype(someIO)>(ios_).get();
  }
  template <typename T, typename K> void set(const auto& v) {
    std::get<IO<T, K>>(ios_).set(v);
  }
  template <typename K> void set(const auto& v) {
    auto someIO = get_element_based_on_2nd_entry<K>(ios_);
    /// someIO will be a copy of the tuple element with the
    /// correct type we need to get our correct ref with that type
    std::get<decltype(someIO)>(ios_).set(v);
  }

private:
  std::tuple<IOS...> ios_;
};

template <class T, char... elements> class IO<T, Kstring<elements...>> {
public:
  IO() : data_{} {}
  ~IO(){};

  void set(T d) { data_ = d; }
  const T &get() { return data_; }
  const char *key() const {
    static constexpr char str[sizeof...(elements) + 1] = {elements..., '\0'};
    return str;
  }
  T data_;
};

int main() {

  IOList<IO<int, KEY("var1")>, IO<int, KEY("var2")>, IO<bool, KEY("var3")>> ios;

  ios.set<KEY("var1")>(12);
  ios.set<KEY("var2")>(1337);
  ios.set<KEY("var3")>(true);

  std::cout << ios.get<KEY("var3")>() << std::endl;
  std::cout << ios.get<KEY("var1")>() << std::endl;
  std::cout << ios.get<KEY("var2")>() << std::endl;

  return 0;
}
