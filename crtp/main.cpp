#include <iostream>
#include "main.h"


int main()
{
    std::cout << std::endl;

    Derived1 d1;
    int data = 7;
    d1.convert(data);

    std::string s = "LOL :)";
    Derived2 d2;
    d2.convert(s);

    std::cout << std::endl;
    std::cout << std::endl;

    auto bptr = d1.get();
    bptr->convert(data);
    /// as long as i cannot use Base* here (because we dont have a tempalte arg, we are fucked)
    //Base* bptr = d1.get();
    //bptr->convert(data);
    Base<Derived1>* bptr2 = &d1;
    bptr2->convert(data);



   // B instance = Factory::create(0);



    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}
