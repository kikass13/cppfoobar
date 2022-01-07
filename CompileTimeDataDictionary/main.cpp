#include <iostream>
#include <algorithm>

/**
 * Literal class type that wraps a constant expression string.
 *
 * Uses implicit conversion to allow templates to *seemingly* accept constant strings.
 */
template<size_t N>
struct StringLiteral {
    constexpr StringLiteral(const char (&str)[N]) {
        std::copy_n(str, N, value);
    }
    
    char value[N];
};

template<StringLiteral lit>
void Print() {
    // The size of the string is available as a constant expression.
    constexpr auto size = sizeof(lit.value);

    // and so is the string's content.
    constexpr auto contents = lit.value;

    std::cout << "Size: " << size << ", Contents: " << contents << std::endl;
}

int main()
{
    Print<"literal string">(); // Prints "Size: 15, Contents: literal string"
    return 0;
}