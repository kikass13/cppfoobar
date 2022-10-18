#include "main.hpp"
#include <assert.h>
#include <cstring>
#include <iostream>

template <size_t N> class Buffer {
public:
  void copy(const char *src) {
    auto size = strlen(src);
    sprintf(&buf[j], "%s", src);
    j += size;
    buf[j] = '\0';
  }
  char *get() { return buf; }
  char *consume() {
    clear();
    return buf;
  }
  size_t size() { return j; }
  void clear() { j = 0; }

private:
  char buf[N];
  size_t j = 0;
};

Buffer<5000> buffer;
auto out = []<typename... Args>(Args... args) {
  std::apply(
      [](auto &&...xs) {
        // ((std::cout << std::forward<decltype(xs)>(xs)), ...);
        // ((buf[j++] = xs[0]), ...);
        // ((copyBuf(xs)), ...);
        ((buffer.copy(xs)), ...);
      },
      std::tie(args...));
};

auto AllAttributes = std::make_tuple(Human{}, Developer{}, Xaxa{});

int main() {
  Human h;
  h.age = 1337;

  std::cout << "Human: " << h.age << std::endl;
  h.attributes(out);
  std::cout << buffer.consume() << std::endl;
  Developer dev;
  dev.commits = 2000;
  dev.motivation = -3;
  dev.attributes(out);
  std::cout << buffer.consume() << std::endl;
  std::cout << "_________________________________________" << std::endl;
  std::apply([&](auto &&...o) { (o.attributes(out), ...); }, AllAttributes);
  std::cout << buffer.consume() << std::endl;
  std::cout << "_________________________________________" << std::endl;
}