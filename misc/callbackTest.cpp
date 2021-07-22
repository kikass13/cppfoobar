


#include "callbackTest.h"


void myCallback(Param* p)
{
	std::cout << "myLocalCallback (non member)\n";
	std::cout << "myVal = " << p->val <<"... \n\n";
}



int main() {
    Object o;
    Manager m;


	//this works
    m.registerCallback(myCallback);
    m.executeCallback();

    m.registerCallback(std::bind(&Object::callback, &o, std::placeholders::_1));
    m.executeCallback();
    

    return 0;
}