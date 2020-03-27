#include <iostream>
#include "src/lib/solution.h"
#include <string>

int main()
{
    Solution solution ;
    std::cout << solution.add(3,5) << std::endl;
    std::cout << solution.add("abc","efg") << std::endl;
    std::cout << solution.add("EE",599) << std::endl;
    std::cout << solution.add(30,"th, January") << std::endl;

    return EXIT_SUCCESS;  
}