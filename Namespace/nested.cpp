#include <iostream>

namespace Foo
{
    namespace Goo // Goo is a namespace inside the Foo namespace
    {
        int add(int x, int y)
        {
            return x + y;
        }
    }
}

int main()
{
    std::cout << Foo::Goo::add(1, 2) << '\n';
    namespace Active = Foo::Goo; // active now refers to Foo::Goo
    std::cout << Active::add(1, 2) << '\n'; // This is really Foo::Goo::add()
    return 0;
}