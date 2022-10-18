#include "main.hpp"
#include <assert.h>
#include <cstring>
#include <iostream>

using AllAttributesT = std::tuple<Human, Developer, Xaxa>;
static auto typeBuffer = createTypeString<AllAttributesT, 1000>();

int main() {
  std::cout << typeBuffer.get() << std::endl;
  std::cout << "_________________________________________" << std::endl;
}