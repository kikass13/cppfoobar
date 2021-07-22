#include <iostream>
#include <boost/preprocessor.hpp>

#define PER_LINE(r, data, type) BOOST_PP_STRINGIZE(type) "\n"
#define EXPAND(seq) BOOST_PP_SEQ_FOR_EACH(PER_LINE,,seq)

#define FRUITS (Apple)(Banana)(Plum)

int main() {
    std::cout << EXPAND(FRUITS);
}