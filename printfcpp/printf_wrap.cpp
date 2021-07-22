#include <iostream>
#include <string>
#include <cstdio>
#include <stdarg.h>



template<class T>
inline auto to_c(T&& arg) -> decltype(std::forward<T>(arg)) {
    return std::forward<T>(arg);
}

inline char const* to_c(std::string const& s) { return s.c_str(); }
inline char const* to_c(std::string& s) { return s.c_str(); }

template<class... Args>
int my_printf(char const* fmt, Args&&... args) {
    return std::printf(fmt, to_c(args)...);
}



char* myPrintBuf(char* fmt, ...)
{
	static char buffer[80] = "";

    va_list args;
    va_start(args,fmt);

    std::vsprintf(buffer, fmt, args);

    va_end(args);

    return buffer;
}

int main() {
    std::string name = "World";
    my_printf("Hello, %s%d!\n", name, 1337);

    std::cout << "blaaa >> " << myPrintBuf("xaxxa: %i\n",1337);

}
