// https://en.wikipedia.org/wiki/New_and_delete_(C%2B%2B)
//      or other sources:
//          https://gist.github.com/pazdera/1098119
#include <cstddef>
#include <new>

class Singleton 
{
    static Singleton *instance;
    static std::size_t refcount;

  public:
    static void *operator new(std::size_t nbytes) throw (std::bad_alloc) 
    {
        if (instance == NULL)
            instance = ::new Singleton; // Use the default allocator
        refcount++;
        return instance;
    }

    static void operator delete(void *p) 
    {
        if (--refcount == 0) {
            ::delete instance;
            instance = NULL;
        }
    }
};

Singleton *Singleton::instance = NULL;
std::size_t Singleton::refcount = 0;

//...