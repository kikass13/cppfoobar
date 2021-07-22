#include <iostream>
class A {
public:
   int dosomething1(const int & in) {
      int out=2*in;
      return out;
   }

   template <class T>
   T dosomething(int in) {
      T out=2*static_cast<T>(in);
      return out;
   }
};

template<class T>
class B : A {
public:
   typedef T mytype;

   void say_hello(mytype in) {
      A a;
      T i=1;
      double j=a.dosomething<double>(i);
      std::cout << j << std::endl;

      double k=1;
      T l=a.template dosomething<T>(i);
      std::cout << l << std::endl;
   }
};

int main() {
   typedef B<int> myclass;
   myclass b;
   myclass::mytype k=5;
   b.say_hello(k);
}


