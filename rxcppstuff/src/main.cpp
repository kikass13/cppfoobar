#include "rxcpp/rx.hpp"
#include <iostream>
#include <memory>


/*
int main()
{
    auto o = rxcpp::observable<>::from<int>(1,2,3);

    o.subscribe([](int item)
                { 
                    std::cout << item+1 << std::endl; 
                });
    
    return 0;
}
*/

/*
struct Foo
{
    int value;
    char c;
};

int main()
{
    auto o = rxcpp::observable<>::from<Foo>(Foo{1,'h'}, Foo{2,'a'}, Foo{3,'i'});
    o.subscribe([](Foo item)
                { 
                    std::cout << item.value << " " << item.c << std::endl; 
                });
    
    return 0;
}
*/


struct Foo
{
    int value;
    char character;
    
    Foo(int initial, char c) : value (initial), character(c) { std::cout << "Foo: constructed from int " << initial << std::endl; }
    Foo(const Foo& other) : value(other.value), character(other.character) { std::cout << "Foo: COPY constructed from other Foo with " << other.value << std::endl; }
    Foo(Foo&& other) : value(other.value), character(other.character) { std::cout << "Foo: MOVE constructor for Foo with " << other.value <<std::endl; }
    ~Foo() { std::cout << "Foo: object with " << value << " destroyed " << std::endl; }
};
/*
int main()
{
    auto o = rxcpp::observable<>::from<Foo>(Foo{1,'h'}, Foo{2,'a'}, Foo{3,'i'});
    o.subscribe([](Foo item)
                { 
                    std::cout << item.value << " " << item.c << std::endl; 
                });
    
    return 0;
}
*/
/// that looks bad ... so much copys passed around! :(
//mb smart pointers are better?


/*
int main()
{
    auto o = rxcpp::observable<>::from<std::shared_ptr<Foo>>(std::make_shared<Foo>(1,'a'),std::make_shared<Foo>(2,'b'),std::make_shared<Foo>(3,'c'));
    o.subscribe([](std::shared_ptr<Foo> item)
                { 
                    std::cout << item->value << " " << item->character << std::endl; 
                });
    
    return 0;
}
*/
// results in...
//
// Foo: constructed from int 3
// Foo: constructed from int 2
// Foo: constructed from int 1
// 1 a
// 2 b
// 3 c
// Foo: object with 3 destroyed 
// Foo: object with 2 destroyed 
// Foo: object with 1 destroyed 
//
// which is exactly what is supposed to happen


struct Bar
{
	int value;
	char character;
    Bar(const Foo& src) : value (src.value), character(src.character) { std::cout << "Bar: constructed from Foo with " << src.value << std::endl; }
    Bar(const Bar& other) : value(other.value), character(other.character) { std::cout << "Bar: COPY constructed from other Bar with " << other.value << std::endl; }
    Bar(Bar&& other) : value(other.value), character(other.character) { std::cout << "Bar: MOVE constructor for Bar with " << other.value <<std::endl; }
    ~Bar() { std::cout << "Bar: object with " << value << " destroyed " << std::endl; }
};

int main()
{
    auto o = rxcpp::observable<>::from<std::shared_ptr<Foo>>(std::make_shared<Foo>(1,'a'),std::make_shared<Foo>(2,'b'),std::make_shared<Foo>(3,'c'))
			.map([](std::shared_ptr<Foo> foo){ return std::make_shared<Bar>(*foo); });

    o.subscribe([](std::shared_ptr<Bar> item)
                { 
                    std::cout << "Bar --> " << item->value << " " << item->character << std::endl; 
                });
    
    return 0;
}
