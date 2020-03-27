#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int intary[] = {1,2,3,4,5,6,7};
    char charary[] = {1,2,3};
    float floatary[] = {1.33,1.56};

    std::cout << "size of int array with 7 elements: " << sizeof(intary) / sizeof(int) << std::endl;
    std::cout << "size of character array with 3 elements: " << sizeof(charary) / sizeof(char) << std::endl;
    std::cout << "size of float array with 2 elements: " << sizeof(floatary) / sizeof(float) << std::endl;

    return EXIT_SUCCESS;
}
