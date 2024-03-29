#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <tuple>
#include <type_traits>

   /// Literal class type that wraps a constant expression string.
        /// Uses implicit conversion to allow templates to *seemingly* accept
        /// constant strings.
        ///   -
        ///   https://ctrpeach.io/posts/cpp20-string-literal-template-parameters/
        template <size_t N> struct StringLiteral {
            constexpr StringLiteral(const char (&str)[N]) { std::copy_n(str, N, value); }
            template <typename OtherStringLiteral> constexpr bool operator==(const OtherStringLiteral& rhs) const {
                return std::strcmp(rhs.value, value) == 0;
            }
            char value[N];
        };

        namespace details {
            template <StringLiteral T, class A, StringLiteral B> constexpr bool check() { return T == B; }

            template <
                StringLiteral T, template <typename, StringLiteral> typename Head, typename A, StringLiteral B,
                typename... Tail>
            constexpr auto get_element_based_on_2nd_entry(std::tuple<Head<A, B>, Tail...>& t) {
                if constexpr (check<T, A, B>()) {
                    return std::get<Head<A, B>>(t);
                } else {
                    auto newTuple
                        = std::apply([](auto&& /*e1*/, auto&&... args) { return std::make_tuple(args...); }, t);
                    return get_element_based_on_2nd_entry<T>(newTuple);
                }
            }

            template <typename... IOs> constexpr auto get_keys_from_ios() {
                std::tuple<IOs...> t {};
                return std::apply([&](auto&&... io) { return std::make_tuple(io.key()...); }, t);
            }

            template <typename tuple_t, typename F> constexpr auto get_array_from_tuple(tuple_t&& t, F&& f) {
                auto get_array = [&](auto&&... x) { return std::array { f(x)... }; };
                return std::apply(get_array, t);
            }

        } // namespace details

        template <class T, StringLiteral K> class IO {
        public:
            IO()
                : data_ {} { }
            ~IO() {};
            void set(const T& d) { data_ = d; }
            const T& get() { return data_; }
            const char* key() const { return K.value; }
            T data_;
        };

        template <class... IOs> class IOList {
        public:
            template <typename T, StringLiteral K> const auto& get() { return std::get<IO<T, K>>(ios_).get(); }
            template <StringLiteral K> const auto& get() {
                auto someIO = details::get_element_based_on_2nd_entry<K>(ios_);
                /// someIO will be a copy of the tuple element with the correct
                /// type we need to get our correct ref with that type
                return std::get<decltype(someIO)>(ios_).get();
            }
            template <typename T, StringLiteral K> void set(const auto& v) { std::get<IO<T, K>>(ios_).set(v); }
            template <StringLiteral K> void set(const auto& v) {
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

  IOList<IO<int, "var1">, IO<int, "var2">, IO<bool, "var3">> ios;

  ios.set<"var1">(12);
  ios.set<"var2">(1337);
  ios.set<"var3">(true);

  std::cout << ios.get<"var3">() << std::endl;
  std::cout << ios.get<"var1">() << std::endl;
  std::cout << ios.get<"var2">() << std::endl;

  return 0;
}
