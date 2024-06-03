#include <iostream>

extern int g_x; // this extern is a forward declaration of a variable named g_x that is defined somewhere else
extern const int g_y; // this extern is a forward declaration of a const variable named g_y that is defined somewhere 
static int gx { 3 }; // this separate internal g_x is only accessible within main.cpp

static int add(int x, int y) // forward declaration for function add
{
    return x + y;
}

int main()
{
    std::cout << gx << '\n'; // uses main.cpp's g_x, prints 3

    std::cout << add(3, 4) << '\n';

    std::cout << g_x << ' ' << g_y << '\n'; // prints 2 3

    return 0;
}
