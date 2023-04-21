#include <array>
#include <tuple>
#include <utility>
#include <iostream>

// c++17 

template <bool AorB>
struct UniqueElementChooser;

template<>
struct UniqueElementChooser<true> {
    template<std::size_t i, typename Tuple>
    static constexpr auto X(const Tuple& tuple){ return std::make_tuple(std::get<i>(tuple)); }
};

template<>
struct UniqueElementChooser<false> {
    template<std::size_t i, typename Tuple>
    static constexpr auto X(const Tuple& tuple){ return std::make_tuple();}
};

template<std::size_t i, class Tuple, std::size_t... is>
static constexpr auto elementisUnique(const Tuple& tuple, std::index_sequence<is...> sequence) {
    constexpr bool isUnique = !(std::is_same<std::tuple_element_t<i, Tuple>, std::tuple_element_t<is, Tuple>>::value || ...);
    return UniqueElementChooser<isUnique>::template X<i>(tuple);
}
template<class Tuple, std::size_t... is>
constexpr auto make_tuple_unique(const Tuple& tuple, std::index_sequence<is...>){
    return std::tuple_cat(elementisUnique<is>(tuple, std::make_index_sequence<is>{})...);
}

template<class Tuple>
constexpr auto make_tuple_unique(const Tuple& t){
    constexpr auto size = std::tuple_size<Tuple>();
    return make_tuple_unique(t, std::make_index_sequence<size>{});
}


struct Group1{};
struct Group2{};
struct Group3{};
struct Group4{};
struct Group5{};

constexpr auto groups = std::make_tuple(Group1{}, Group2{}, Group2{}, Group3{}, Group3{}, Group4{}, Group5{});
constexpr auto UNIQUETEST = make_tuple_unique(groups);

int main(){
    std::cout << std::tuple_size<decltype(UNIQUETEST)>() << std::endl;
    return 0;
}