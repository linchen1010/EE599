#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int x = 20;
    int y = 30;

    int input1 = 20;
    int input2 = 30;

    int *a = &input1;
    int *b = &input2;
    
    std::cout << "references: x = " << x << ", y = " << y << std::endl;
    solution.Swap(x,y);
    std::cout << "After: x = " << x << ", y = " << y << std::endl;

    std::cout << "pointers  : a = " << *a << ", b = " << *b << std::endl;
    solution.Swap2(a,b);
    std::cout << "After: a = " << *a << ", b = " << *b << std::endl;

    return 0;
}