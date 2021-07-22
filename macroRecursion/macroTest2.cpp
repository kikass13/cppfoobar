#include <iostream>
#include <boost/preprocessor.hpp>

#define PER_LINE(r, data, type) void type () {std::cout << "i am " << BOOST_PP_STRINGIZE(type) << std::endl;}
#define EXPAND(seq) BOOST_PP_SEQ_FOR_EACH(PER_LINE,,seq)

#define FRUITS \
	(Apple) \
	(Banana) \
	(Plum)

//this will generate functions named after the predefined macros
//we can call these
EXPAND(FRUITS)


int main() 
{
    Apple();
    Banana();
    Plum();
}