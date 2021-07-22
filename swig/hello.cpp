#include "hello.h"



char* hello(char* what)
{
	std::cout << "message: ";
	std::string str = std::string(what);
	std::cout << str << "\n";
	return what;
}