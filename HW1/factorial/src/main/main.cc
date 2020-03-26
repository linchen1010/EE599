#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int n;
    std::cout << "(Calculate n!) >> Please enter n:" ;
    std::cin >> n ;
    if(n>=0) {
        std::cout << "(Non Recursive) " << n << "! = " << solution.Factorial(n) << std::endl;
        std::cout << "(Recursive) " << n << "! = " << solution.FactorialRecursive(n) << std::endl;
    }
    else {
        std::cout << "n should be greater or equal to 0!" << std::endl;
    }
    return 0;
}