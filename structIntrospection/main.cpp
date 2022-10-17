#include "main.hpp"
#include <assert.h>
#include <cstring>
#include <iostream>

// void out_() {}
// template <typename T, typename... Ts> void out_(T &&t, Ts &&...params) {
//   std::cout << t;
//   out_(params...);
// }
// auto out = []<typename... Args>(Args... args) { out_(args...); };

auto out = []<typename... Args>(Args... args) {
  std::apply(
      [](auto &&...xs) {
        ((std::cout << std::forward<decltype(xs)>(xs)), ...);
      },
      std::tie(args...));
};

auto AllAttributes = std::make_tuple(Human{}, Developer{});

int main() {
  Human h;
  h.age = 1337;

  std::cout << "Human: " << h.age << std::endl;
  h.attributes(out);
  std::cout << std::endl;
  Developer dev;
  dev.commits = 2000;
  dev.motivation = -3;
  dev.attributes(out);
  std::cout << std::endl;
  std::cout << "_________________________________________" << std::endl;
  std::apply([&](auto&& ...o) { (o.attributes(out), ...); }, AllAttributes);
  std::cout << std::endl;
  std::cout << "_________________________________________" << std::endl;
}