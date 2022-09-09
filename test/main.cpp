#include <iostream>
#include <tuple>

class A {
public:
  A(int id) : id_{id} {}
  int &id() { return this->id_; }

private:
  int id_;
};

class B : A {
public:
  B() : A(1337), myId_{this->id()} {}

  int &get() { return this->myId_; }

private:
  int myId_;
};

int main() {
  B b;

  std::cout << b.get() << std::endl;

}