#include <type_traits>
#include <map>

// Utility to select template parameter at index I
template<std::size_t I, class T>
struct elementAt;
 
// recursive case
template<std::size_t I, class Head, class... Tail, template<typename...> class E>
struct elementAt<I, E<Head, Tail...>>
    : elementAt<I-1, E<Tail...>> { };
 
// base case
template< class Head, class... Tail, template<typename...> class E>
struct elementAt<0, E<Head, Tail...>> {
   using type = Head;
};

template<std::size_t I, class T>
using elementAt_t = typename elementAt<I, T>::type;

// use it:
template <class Derived> class SlaveDriverBase : public Derived {
    void OnCanState(/* ... add your stuff here ...*/) {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
        
        } 

        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
        
        } 
    }
};

int main() {
    SlaveDriverBase<std::map<int, double>> s;
    
}
