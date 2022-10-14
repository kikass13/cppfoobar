#include "queue.hpp"
#include <assert.h>
#include <cstring>
#include <iostream>

static constexpr size_t N = 8;

int main() {
  Queue<uint8_t, N> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  for (unsigned int i = 0; i < N; i++) {
    std::cout << (int)q.get() << " ";
    q.pop();
  }
  std::cout << std::endl;
  std::cout << "_____________________________________" << std::endl;

  Queue<uint8_t, N> q2;
  uint8_t data[5] = {10, 20, 30, 40, 50};
  q2.copy(data, 5);
  q2.push(137);
  for (unsigned int i = 0; i < N; i++) {
    std::cout << (int)q2.get() << " ";
    q2.pop();
  }
  std::cout << std::endl;
  std::cout << "_____________________________________" << std::endl;
}