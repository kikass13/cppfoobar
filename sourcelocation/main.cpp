#include <iostream>
#include <experimental/source_location>

using source_l = std::experimental::source_location;

template <int I, typename... Ts>
struct debug
{
    debug(Ts&&... ts, 
        const source_l& loc = source_l::current())
    {
        std::cout << I << loc.function_name() << " line " << loc.line() << ": ";
        ((std::cout << std::forward<Ts>(ts) << " "), ...);
        std::cout << std::endl;
    }
};
template <typename... Ts>
struct debugA : debug<1, Ts...>{
    using debug<1, Ts...>::debug;
};
template <typename... Ts>
debugA(Ts&&...args) -> debugA<Ts...>;
template <typename... Ts>
struct debugB : debug<2, Ts...>{
    using debug<2, Ts...>::debug;
};
template <typename... Ts>
debugB(Ts&&...args) -> debugB<Ts...>;

void test()
{
    debugA();
    debugA(9);
}

void foo(const source_l& loc = source_l::current())
{
    debugA();
    debugA<int>(666, loc);
}

int main()
{
    debugB(5, 'A', 3.14f, "foo");
    test();
    foo();
    debugB("bar", 123, 2.72);
}
