#include "main.h"


int main2(void) {
    Severity first, second;
    first = Severity::XAXA;
    second = Severity::TWO;

    std::cout << first << "(" << static_cast<unsigned int>(first) << ")" << std::endl; // FOUR(4)

    std::string strOne;
    strOne = ~first;
    std::cout << strOne << std::endl; // FOUR

    std::string strTwo;
    strTwo = ("Enum-" + second) + (Severity::THREE + "-test");
    std::cout << strTwo << std::endl; // Enum-TWOTHREE-test

    std::string strThree("Severity: ");
    strThree += second;
    std::cout << strThree << std::endl; // Severity: TWO
    std::cout << "Enum count=" << *first << std::endl;

    std::cout << "\n________\n";

    SuperType st;
    st = SuperType::XOXO;
    std::cout << st << ": " << static_cast<unsigned int>(st) << std::endl;
}