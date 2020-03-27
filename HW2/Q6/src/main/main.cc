#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string input = "racecar";
    std::cout << input << " --> ";
    std::cout << solution.FindPalindrome(input) << std::endl;
    input = "racecar123";
    std::cout << input << " --> ";
    std::cout << solution.FindPalindrome(input) << std::endl;
    std::string input2 = "No 'x' in Nixon.";
    std::cout << input2 << " --> ";
    std::cout << solution.ApproximatePalindrome(input2) << std::endl;
    input2 = "A man, a plan, a canal, Panama!";
    std::cout << input2 << " --> ";
    std::cout << solution.ApproximatePalindrome(input2) << std::endl;
    input2 = "Was it a car or a cat I saw?";
    std::cout << input2 << " --> ";
    std::cout << solution.ApproximatePalindrome(input2) << std::endl;
    input2 = "Was it a car or a cat I saw? No!";
    std::cout << input2 << " --> ";
    std::cout << solution.ApproximatePalindrome(input2) << std::endl;
    return 0;
}