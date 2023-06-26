

#include <array>
#include <cstring>
#include <iostream>

template <class T, size_t SIZE> class DmaTxRingBuffer {
public:
  T &front() { return buf.at(tail); }
  void pop() {
    if (tail == SIZE - 1) {
      tail = 0;
    } else {
      tail++;
    }
  }
  T *data() { return buf.data(); }
  size_t read(T *target, size_t length) {
    if (length > SIZE) {
      return 0;
    }
    if ((tail + length) > SIZE) {
      size_t s1 = SIZE - tail;
      size_t s2 = length - s1;
      T *target_mid = target + s1;
      std::memcpy(target, &buf.at(tail), s1);
      std::memcpy(target_mid, &buf.at(0), s2);
    } else {
      std::memcpy(target, &buf.at(tail), length);
    }
    auto tmptail = tail + length;
    if (tmptail >= (SIZE + 1)) {
      tmptail = tmptail - SIZE;
    }
    tail = tmptail;
    return length;
  }
  std::array<T, SIZE> buf;
  T tail = 0;
};

int main() {

  std::cout << "HELLO" << std::endl;

  DmaTxRingBuffer<uint8_t, 10> buf;

  std::cout << "####################" << std::endl;
  buf.buf.at(0) = 1;
  buf.buf.at(1) = 2;
  buf.buf.at(2) = 3;
  buf.buf.at(3) = 4;
  buf.buf.at(4) = 5;
  buf.buf.at(5) = 6;
  buf.buf.at(6) = 7;
  buf.buf.at(7) = 8;
  buf.buf.at(8) = 9;
  buf.buf.at(9) = 10;
  std::cout << "####################" << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << ": " << (int)buf.front() << " ";
    buf.pop();
  }
  std::cout << std::endl;
  std::cout << "####################" << std::endl;
  buf.buf.at(0) = 1;
  buf.buf.at(1) = 2;
  buf.buf.at(2) = 3;
  buf.buf.at(3) = 4;
  buf.buf.at(4) = 5;
  for (int i = 0; i < 5; i++) {
    std::cout << ": " << (int)buf.front() << " ";
    buf.pop();
  }
  std::cout << std::endl;
  buf.buf.at(0) = 1;
  buf.buf.at(1) = 2;
  buf.buf.at(2) = 3;
  buf.buf.at(3) = 4;
  buf.buf.at(4) = 5;
  buf.buf.at(5) = 6;
  buf.buf.at(6) = 7;
  buf.buf.at(7) = 8;
  buf.buf.at(8) = 9;
  buf.buf.at(9) = 10;
  uint8_t temp[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  buf.read(temp, 10);
  for (int i = 0; i < 10; i++) {
    std::cout << "> " << (int)temp[i] << " ";
  }
  std::cout << std::endl;
  std::cout << " __________________________ " << std::endl;

  std::cout << (int)*buf.data() << std::endl;
  std::cout << " __________________________ " << std::endl;
}