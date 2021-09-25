#include <iostream>

#include "RingBuffer.hpp"

int main() 
{
    RingBuffer<uint16_t, 256> circle;
    std::cout << "Size: " << circle.size() << "Capacity: " << circle.capacity()
            << std::endl;

    uint32_t x = 1;
    std::cout << "Put 1, val: " << x << std::endl;
    circle.put(x);

    x = circle.get();
    std::cout << "Popped: " << x << std::endl;

    std::cout << "Empty: " << circle.empty() << std::endl;

    std::cout << "Adding" << circle.capacity() - 1 << " values" << std::endl;
    for (uint32_t i = 0; i < circle.capacity() - 1; i++) {
    circle.put(i);
    }

    circle.reset();

    std::cout << "Full: " << circle.full() << std::endl;

    std::cout << "Adding " << circle.capacity() << " values" << std::endl;
    for (size_t i = 0; i < circle.capacity(); i++) {
    circle.put(i);
    }

    std::cout << "Full: " << circle.full() << std::endl;

    std::cout << "Reading back values: " << std::endl;
    while (!circle.empty()) {
    std::cout << circle.get() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Adding 15 values" << std::endl;
    for (size_t i = 0; i < circle.size() + 5; i++) {
    circle.put(i);
    }

    std::cout << "Full: " << circle.full() << std::endl;

    std::cout << "Reading back values: " << std::endl;
    while (!circle.empty()) {
        std::cout << circle.get() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Empty: " << circle.empty() << std::endl;
    std::cout << "Full: " << circle.full() << std::endl;
}