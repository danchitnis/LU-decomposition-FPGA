#include <iostream>

int main()
{
    int i;
    i = 7;
    {
        int i;
        i = 5;
        std::cout << i << std::endl;
    }
    std::cout << i << std::endl;
    return 0;
}