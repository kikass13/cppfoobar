#include "singleton.h"

#include <iostream>



int main()
{
	Singleton *s1 = new Singleton;
	Singleton *s2 = new Singleton;
	Singleton *s3 = new Singleton;
	std::cout << "instance ptr1: " << s1 << "\n";
	std::cout << "instance ptr2: " << s2 << "\n";
	std::cout << "instance ptr3: " << s3 << "\n";

	delete s1;
	delete s2;
	delete s3;

	return 0;
}