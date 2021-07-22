#include <iostream>

class Base 
{ 
	public: 
		Base(){}
		//Base(int i) {this->random = i;} 

		//int getRandom(){return this->random;}
		//void setRandom(int r){this->random = r;}

		virtual void foo(){};

	public:
		virtual void preCalc(){};
		void calc(){preCalc(); std::cout << "Base calcs()\n"; postCalc();}
		virtual void postCalc(){};

		virtual void talk(){};
};


class A : public virtual Base 
{
	public:
		A(){std::cout << "Constructed A ... \n";}

		void imAdoSomething(){std::cout << "A implemented feature" << "\n";};

};

class B : public virtual Base 
{
	public:
		B(){std::cout << "Constructed B ... \n";}

		void imBdoSomething(){std::cout << "B implemented feature" << "\n";};


};



/*

	------------------------------------------------------------

*/

class NodeA : public  A
{
	public:
		NodeA(){std::cout << "Constructed NodeA ... \n";}

		// this is an implementation of our virtual base function for our node
		void talk(){std::cout << "NodeA says hi ... \n";}

		void preCalc(){std::cout << "let me do something before calc!\n";};
		void postCalc(){std::cout << "let me do something after calc!\n";};
};

class NodeB : public B 
{
	public:
		NodeB(){std::cout << "Constructed NodeB ... \n";}

		// this is an implementation of our virtual base function for our node
		void talk(){std::cout << "NodeB says hi ... \n";}

		void preCalc(){std::cout << "let me do something before calc!\n";};
		void postCalc(){std::cout << "let me do something after calc!\n";};
};

class NodeAB : public A, public B 
{
	public:
		NodeAB(){std::cout << "Constructed NodeAB ... \n";}

		// this is an implementation of our virtual base function for our node
		void talk(){std::cout << "NodeAB says hi ... \n";}

		void preCalc(){std::cout << "NodeAB let me do something before calc!\n";};
		void postCalc(){std::cout << "NodeAB let me do something after calc!\n";};
};
