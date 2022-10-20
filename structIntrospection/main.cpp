#include "main.hpp"
#include <assert.h>
#include <cstring>
#include <iostream>

using AllAttributesT = std::tuple<Human, Developer, Xaxa>;
static auto typeBuffer = createTypeString<AllAttributesT, 1000>();

int main() {
  Human h{.age = 10, .name = {'1','2','3'}, .r=R::NONE};

  std::cout << typeBuffer.get() << std::endl;
  std::cout << "_________________________________________" << std::endl;
}
