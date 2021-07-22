

#include <iostream>

#include "Object.h"


int main()
{
	std::cout << "______________________________" << "\n";
	NodeA* oa = new NodeA();
	oa->talk();
	oa->imAdoSomething();
	std::cout << "______________________________" << "\n";



	std::cout << "______________________________" << "\n";
	NodeB* ob = new NodeB();
	ob->talk();
	ob->imBdoSomething();
	std::cout << "______________________________" << "\n";




	std::cout << "______________________________" << "\n";
	NodeAB* oab = new NodeAB();
	oab->talk();
	oab->calc();
	oab->imAdoSomething();
	oab->imBdoSomething();
	std::cout << "______________________________" << "\n";




	delete oa;
	delete ob;
	delete oab;

	return 0;
}