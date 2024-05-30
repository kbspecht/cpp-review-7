#include "add.h" // for BasicMath::add()
#include "growth.h" // for BasicMath::e
#include <iostream>

int main()
{
    std::cout << BasicMath::add(4, 3) << '\n';
    std::cout << BasicMath::pi << '\n';
    std::cout << BasicMath::e << '\n';
    
    return 0;
}