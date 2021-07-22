#include <iostream>

class Animal
{
    public:
        virtual int eat(){std::cout << "I'm eating generic food.";}
};

class Cat : public Animal
{
    public:
        int eat() { std::cout << "I'm eating a rat."; }
};