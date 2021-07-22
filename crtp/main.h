#pragma once
#include <memory>
#include <iostream>


template <class Derived>
class Base
{
public:
  template <class T>
  void convert(T stuff){
    static_cast<Derived*>(this)->convert(stuff);
  }

  Base<Derived>* get(){
      return this;
  }
};

using B = std::shared_ptr<Base<void>>;
typedef B B;

class Derived1: public Base<Derived1>
{
public:
  void convert(int& x){
    std::cout << "Implementation Derived1" << std::endl;
    std::cout << "int: " << x << std::endl;
  }
};

class Derived2: public Base<Derived2>
{
public:
  void convert(std::string& s){
    std::cout << "Implementation Derived2" << std::endl;
    std::cout << "string: " << s << std::endl;
  }
};

class Derived3: public Base<Derived3>
{
public:

};


// ======================================================================

class Factory{
public:
    static B create(int mode){
        B iptr = nullptr;
        switch(mode)
        {
            case 0:
            {/*
                Derived1 d();
                iptr = std::make_shared<Derived1>(d);
                break;
*/
            }
            default:
                break;
        }
        return iptr;
    }
};



