#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string input = "TEST";
    std::cout << "Original: " << input << std::endl;
    std::cout << "After:    " << solution.SwapIndex(input,0,5) << std::endl;
    
    std::string input2 = "EE599";
    std::cout << "Original: " << input2 << std::endl;
    solution.ReverseString(input2);
    std::cout << "After:    " << input2 << std::endl;

    std::string input3 = "EE599";
    std::cout << "Original: " << input3 << std::endl;
    std::cout << "After:    " << solution.ToLower(input3) << std::endl;

    return EXIT_SUCCESS;
}