#include <iostream>

#include "xxhash.hpp"

int main() {
  std::string x("void b(int, int)");
  xxh::hash_t<32> hash = xxh::xxhash<32>(x);

  std::cout << hash << std::endl;
  return 0;
}