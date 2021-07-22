//fgn testing 
//see: https://dieboostcppbibliotheken.de/boost.bind

#include <boost/bind.hpp>
#include <vector>
#include <algorithm>
#include <iostream>


struct is_ok3
{
	int val;
	is_ok3() : val(1337) {}

	//  __host__ __device__
	bool operator()(int a, int b)
	{
		return (a % b) == 0;
	}
};


struct is_ok2
{
//  __host__ __device__
  bool operator()(int a, int b)
  {
    return (a % b) == 0;
  }
};


bool is_ok1(int a, int b)
{
	if(a == b)
		return true;
	return false;
}

template <typename T1, typename T2> 
T1 maxmax(T1 x, T2 y)
{
	T1 res = y;
	if(x > y) res = x;
	return res;
}

template <typename T> 
T max(T x, T y)
{
	T res = y;
	if(x > y) res = x;
	return res;
}

static const void xaxaStr(int i, std::string s)
{
	std::cout << s << " " << i << '\n';
}

static const void xaxa(int i)
{
	std::cout << i << '\n';
}


struct someFunctor1
{
	static const void print(std::ostream *os, int i)
	{
		*os << i << '\n';
	}
};

void print(std::ostream *os, int i)
{
	*os << i << '\n';
}

int main()
{
	std::vector<int> v{1, 3, 2 ,4 , 10, 13};
	std::vector<int> result;
	//#1
	std::for_each(v.begin(), v.end(), boost::bind(print, &std::cout, _1));
	std::cout << "-----------------------\n";
	//#2
	struct someFunctor1 func;
	std::for_each(v.begin(), v.end(), boost::bind(func.print, &std::cout, _1));
	std::cout << "-----------------------\n";
	//#3
	auto f_ = boost::bind(func.print, &std::cout, _1);
	std::for_each(v.begin(), v.end(), f_);
	std::cout << "-----------------------\n";
	//#4
	auto ff_ = boost::bind(xaxa, _1);
	ff_(9);
	std::cout << "-----------------------\n";
	//#5
	auto fff_ = boost::bind(xaxaStr, _1, "xaxa");
	fff_(10);
	std::cout << "-----------------------\n";
	//#6
	auto bla0 = max(1,2);								// we dont need a template here, because every type is int at compile time
	//auto g_ = boost::bind(max, _1, 222.22); 			// *** this does not work, because our template has only 1 type and these 2 arguments have different types
	auto g_ = boost::bind(max<double>, _1, 222.22);
	auto bla1 = g_(13.37);
	auto bla2 = g_(1337);
	std::cout << bla0 << " ||| " << bla1 << " ... " << bla2 << "\n";
	std::cout << "-----------------------\n";
	//#7
	auto gg_ = boost::bind(maxmax<double,double>, _1, _2);
	std::cout << gg_(7, 12.0) << "\n";
	std::cout << "-----------------------\n";
	//#8
	std::cout << "SIZEv: " << v.size() << std::endl;
	result.resize(v.size());
	std::cout << "SIZEres: " << result.size() << std::endl;
	auto c_ = boost::bind(is_ok1, 2, _1);
    auto end = std::copy_if (v.begin(), v.end(), result.begin(), c_ );
    //auto it = std::copy_if (foo.begin(), foo.end(), bar.begin(), [](int i){return !(i<0);} );
    int length = end-result.begin();
    std::cout << *(end-1);
    std::cout << "\n__" << length << "__\n";
    for(int j = 0; j < length; j++)
    	std::cout << result[j] << ", " ;
    std::cout << std::endl;

    result.resize(length);
    std::cout << "SIZE: " << result.size() << std::endl;
    for(int j = 0; j < result.size(); j++)
    	std::cout << result[j] << ", " ;
   	std::cout << std::endl;

	std::cout << "-----------------------\n";
	//#9
	result.resize(v.size());
	auto cc_ = std::bind(is_ok2(), 2, 2);
	std::cout << " -> " << cc_() << std::endl;
	std::cout << "-----------------------\n";
	//#9
	is_ok3 func3_;
	std::cout << " constructed is_ok3: " << func3_.val << std::endl;
	result.resize(v.size());
	//auto ccc_ = std::bind(boost::mem_fn(&is_ok3::is_ok), boost::ref(someFunctor3), _1, _2);
	//auto ccc_ = std::bind<int, int>(someFunctor3, _1, _2);
	int a = 4; int b = 2;
	auto cccc_ = boost::bind<bool>(func3_, _1, b);
	std::cout << a << " % " << b << " -> " << cccc_(a) << std::endl;
	auto end3 = std::copy_if (v.begin(), v.end(), result.begin(), cccc_ );
	length = end3-result.begin();
	result.resize(length);
	for(int j = 0; j < result.size(); j++)
    	std::cout << result[j] << ", " ;
    std::cout << std::endl;
	std::cout << "-----------------------\n";

}

/*template <class T> struct DoWork {  };

auto f = boost::bind(&T::some_complicated_method, _3, _2, "woah", _2));

DoWork<decltype(T)> work_on_it(f); // of course, using a factory would be _fine_
*/