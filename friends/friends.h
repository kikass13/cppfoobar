#pragma once

class B; //Forward declaration of B needed outside foo namespace

namespace foo {
class A
{

friend class ::B; //namespace operator to make sure compiler does not look for foo::B

public:
    A() {};
    ~A() {};
protected:
    void testfunc();

private:
    int returnValue;
};
}

class B
{
public:
    B() {};
    ~B() {};
    void run();
};