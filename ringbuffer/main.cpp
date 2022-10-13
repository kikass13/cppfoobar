#include "RingBuffer.hpp"
#include <assert.h>
#include <cstring>
#include <iostream>

int main() {
  int v = 0;
  //   RingBuffer<uint16_t, 256> circle;
  //   std::cout << "Size: " << circle.size() << "\nCapacity: " <<
  //   circle.capacity()
  //             << std::endl;

  //   uint32_t x = 1;
  //   std::cout << "Put 1, val: " << x << std::endl;
  //   circle.push_back(x);

  //   x = circle.consume();
  //   std::cout << "Popped: " << x << std::endl;

  //   std::cout << "Empty: " << circle.isEmpty() << std::endl;

  //   std::cout << "Adding" << circle.capacity() - 1 << " values" << std::endl;
  //   for (uint32_t i = 0; i < circle.capacity() - 1; i++) {
  //     circle.push_back(i);
  //   }

  //   circle.reset();

  //   std::cout << "Full: " << circle.isFull() << std::endl;

  //   std::cout << "Adding " << circle.capacity() << " values" << std::endl;
  //   for (size_t i = 0; i < circle.capacity(); i++) {
  //     circle.push_back(i);
  //   }

  //   std::cout << "Full: " << circle.isFull() << std::endl;

  //   std::cout << "Reading back values: " << std::endl;
  //   while (!circle.isEmpty()) {
  //     std::cout << circle.consume() << std::endl;
  //   }
  //   std::cout << std::endl;

  //   std::cout << "Adding 15 values" << std::endl;
  //   for (size_t i = 0; i < circle.used() + 5; i++) {
  //     circle.push_back(i);
  //   }

  //   std::cout << "Full: " << circle.isFull() << std::endl;

  //   std::cout << "Reading back values: " << std::endl;
  //   while (!circle.isEmpty()) {
  //     std::cout << circle.consume() << std::endl;
  //   }
  //   std::cout << std::endl;

  //   std::cout << "Empty: " << circle.isEmpty() << std::endl;
  //   std::cout << "Full: " << circle.isFull() << std::endl;

  std::cout << "______________________________________________" << std::endl;

  RingBuffer<uint8_t, 8> nonlinearized;
  int test[8] = {0xff, 0xff, 0xff, 0, 1, 2, 3, 4};
  assert(nonlinearized.size() == 0 && !nonlinearized.isFull() &&
         nonlinearized.isEmpty());
  nonlinearized.push_back(test[0]);
  nonlinearized.push_back(test[1]);
  nonlinearized.push_back(test[2]);
  nonlinearized.push_back(test[3]);
  nonlinearized.push_back(test[4]);
  nonlinearized.push_back(test[5]);
  nonlinearized.push_back(test[6]);
  nonlinearized.push_back(test[7]);
  assert(nonlinearized.size() == 8 && nonlinearized.isFull() &&
         !nonlinearized.isEmpty());
  for (std::size_t i = 0; i < 8; i++) {
    std::cout << (int)nonlinearized.at(i) << " ";
    assert(nonlinearized.at(i) == test[i]);
  }
  std::cout << "size: " << nonlinearized.size() << std::endl;
  std::cout << "get: " << (int)nonlinearized.consume() << std::endl;
  std::cout << "size: " << nonlinearized.size() << std::endl;
  for (std::size_t i = 0; i < 8; i++) {
    std::cout << (int)nonlinearized.at(i) << " ";
  }
  std::cout << std::endl;
  std::cout << "linearized2: " << nonlinearized.is_linearized() << std::endl;
  std::cout << "put: 244 x2" << std::endl;
  nonlinearized.push_back(244);
  nonlinearized.push_back(244);
  assert(!nonlinearized.is_linearized());
  std::cout << "linearized3: " << nonlinearized.is_linearized() << std::endl;
  std::cout << "size: " << nonlinearized.size() << std::endl;
  uint8_t test1[8] = {244, 244, 255, 0, 1, 2, 3, 4};
  for (std::size_t i = 0; i < 8; i++) {
    std::cout << (int)nonlinearized.at(i) << " ";
    assert(nonlinearized.at(i) == test1[i]);
  }
  std::cout << std::endl;
  std::cout << "size: " << nonlinearized.size() << std::endl;
  std::cout << "full: " << nonlinearized.isFull() << std::endl;
  std::cout << "empty: " << nonlinearized.isEmpty() << std::endl;
  std::cout << "linearized4: " << nonlinearized.is_linearized() << std::endl;
  std::cout << "linearize()" << std::endl;
  auto *linearized = nonlinearized.linearize();
  std::cout << "linearized5 " << nonlinearized.is_linearized() << std::endl;
  assert(nonlinearized.is_linearized());
  uint8_t test2[8] = {255, 0, 1, 2, 3, 4, 244, 244};
  for (std::size_t i = 0; i < 8; i++) {
    std::cout << (int)nonlinearized.at(i) << " ";
    assert(nonlinearized.at(i) == test2[i]);
  }
  std::cout << std::endl;
  assert(nonlinearized.size() == 8 && nonlinearized.isFull() &&
         !nonlinearized.isEmpty());
  std::cout << "size: " << nonlinearized.size() << std::endl;
  std::cout << "full: " << nonlinearized.isFull() << std::endl;
  std::cout << "empty: " << nonlinearized.isEmpty() << std::endl;
  std::cout << std::endl;

  std::cout << "DO COPY of 5()" << std::endl;
  uint8_t tmpBuf[5] = {10, 20, 30, 40, 50};
  uint8_t test3[8] = {10, 20, 30, 40, 50, 4, 244, 244};
  nonlinearized.copy(tmpBuf, sizeof(tmpBuf));
  for (std::size_t i = 0; i < 8; i++) {
    std::cout << (int)nonlinearized.at(i) << " ";
    assert(nonlinearized.at(i) == test3[i]);
  }
  std::cout << std::endl;
  std::cout << (int)nonlinearized.consume() << std::endl;
  std::cout << (int)nonlinearized.consume() << std::endl;
  std::cout << (int)nonlinearized.consume() << std::endl;
  std::cout << "size: " << nonlinearized.size() << std::endl;
  std::cout << "full: " << nonlinearized.isFull() << std::endl;
  std::cout << "empty: " << nonlinearized.isEmpty() << std::endl;
  std::cout << (int)nonlinearized.consume() << std::endl;
  std::cout << (int)nonlinearized.consume() << std::endl;
  std::cout << (int)nonlinearized.consume() << std::endl;
  std::cout << (int)nonlinearized.consume() << std::endl;
  std::cout << (int)nonlinearized.consume() << std::endl;
  assert(nonlinearized.size() == 0 && !nonlinearized.isFull() &&
         nonlinearized.isEmpty());
  std::cout << "size: " << nonlinearized.size() << std::endl;
  std::cout << "full: " << nonlinearized.isFull() << std::endl;
  std::cout << "empty: " << nonlinearized.isEmpty() << std::endl;
  std::cout << "______________________________________________" << std::endl;

  RingBuffer<uint8_t, 8> xaxa;
  uint8_t tmpBuf2[5] = {10, 20, 30, 40, 50};
  xaxa.copy(tmpBuf2, sizeof(tmpBuf2));
  for (std::size_t i = 0; i < 8; i++) {
    std::cout << (int)xaxa.at(i) << " ";
    if (i < sizeof(tmpBuf2)) {
      assert(xaxa.at(i) == tmpBuf2[i]);
    } else {
      assert(xaxa.at(i) == 0);
    }
  }
  std::cout << std::endl;
  std::cout << "put: 127" << std::endl;
  xaxa.push_back(127);
  for (std::size_t i = 0; i < 8; i++) {
    std::cout << (int)xaxa.at(i) << " ";
    if (i < sizeof(tmpBuf2)) {
      assert(xaxa.at(i) == tmpBuf2[i]);
    } else if (i == sizeof(tmpBuf2)) {
      assert(xaxa.at(i) == 127);
    } else {
      assert(xaxa.at(i) == 0);
    }
  }
  std::cout << std::endl;
  v = xaxa.consume();
  std::cout << "get: " << (int)xaxa.consume() << std::endl;
  assert(v == 10);
  for (std::size_t i = 0; i < 8; i++) {
    std::cout << (int)xaxa.at(i) << " ";
  }
  std::cout << std::endl;
  std::cout << "cear buffer" << std::endl;
  xaxa.reset();
  assert(nonlinearized.size() == 0 && !nonlinearized.isFull() &&
         nonlinearized.isEmpty());
  std::cout << "______________________________________________" << std::endl;
}