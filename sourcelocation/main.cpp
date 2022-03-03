#include <iostream>
#include <source_location>

using source_l = std::experimental::source_location;

template <typename... Ts>
struct debug
{
    debug(Ts&&... ts, 
        const source_l& loc = source_l::current())
    {
        std::cout << loc.function_name() << " line " << loc.line() << ": ";
        ((std::cout << std::forward<Ts>(ts) << " "), ...);
        std::cout << std::endl;
    }
};

template <typename... Ts>
debug(Ts&&...args) -> debug<Ts...>;

void test()
{
    debug();
    debug(9);
}

void foo(const source_l& loc = source_l::current())
{
    debug();
    debug<int>(666, loc);
}

int main()
{
    debug(5, 'A', 3.14f, "foo");
    test();
    foo();
    debug("bar", 123, 2.72);
}
