#include "friends.h"

void foo::A::testfunc()
{}

void B::run()
{
    foo::A a = foo::A();
    a.testfunc();
}

int main(int argc, char** argv)
{
    B b = B();

    b.run();
    return 0;
}