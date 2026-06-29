#include "hello.hpp"

#include <iostream>

void sayHello()
{
#if defined(TEST_EXPORT_LIB)
    std::cout << "This function is called within a shared library\n";
#else 
    std::cout << "This function is called within a static library\n";
#endif
}
