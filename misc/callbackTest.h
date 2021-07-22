#include <iostream>
#include <functional>





class Param
{
public:
	Param(int i){this->val = i;}
	int val;
};


class Manager
{
	typedef std::function<void(Param*)> Callback;

public:
	void executeCallback()
	{
		Param p(1337);
		this->f(&p);
	}


	// see : http://www.cplusplus.com/forum/beginner/196638/
	void registerCallback(Callback callback)
	{
		this->f = callback; //std::bind(callback);
	};

/*
	template <typename TOwner, void(TOwner::*func)()>
	void Call(TOwner *p) 
	{
		(p->*func)();
	}
*/

private:
	Callback f;
};





class Object
{
public:
	void callback(Param *p) 
    { 
    	std::cout << "i did something ... \n";
    	std::cout << "myVal = " << p->val <<"... \n\n";
    }
};
