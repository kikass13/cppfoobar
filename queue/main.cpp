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

  Queue<uint8_t, 256> q3;
  uint8_t d[2] = {255, 0};
  for (unsigned int n = 0; n < 3; n++) {
    for (unsigned int i = 0; i < 129; i++) {
      bool s = q3.copy(d, 2);
      if (!s) {
        std::cout << "failed at: " << i << std::endl;
      }
    }

    for (unsigned int i = 0; i < 256; i++) {
      std::cout << (int)q3.get() << " ";
      q3.pop();
    }
    std::cout << std::endl;
    std::cout << "S: " << (int)q3.getSize() << std::endl;
  }
  std::cout << "_____________________________________" << std::endl;

  Queue<uint8_t, 8> q4;
  uint8_t dd[5] = {255, 244, 233, 222, 211};
  q4.push(1);
  q4.push(2);
  q4.push(3);
  q4.pop();
  q4.push(4);
  // q4.push(5);
  // q4.pop();
  // q4.pop();
  bool s = q4.copy(dd, 5);
  if (!s) {
    std::cout << "failed at X" << std::endl;
  }

  size_t size = q4.getSize();
  for (unsigned int i = 0; i < size; i++) {
    std::cout << (int)q4.at(i) << " ";
  }
  std::cout << std::endl;
  std::cout << "S: " << (int)q3.getSize() << std::endl;
  std::cout << "_____________________________________" << std::endl;
}