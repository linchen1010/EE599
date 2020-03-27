#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;

    std::vector<int> inputs = {1,3,2,3,5,2};
    std::cout << "Original Vector: " ;
    solution.print(inputs);
    std::cout << "| RemoveDuplicate: " ;
    solution.RemoveDuplicate(inputs);

    std::cout << " " << std::endl;

    inputs = {1,2,2,4,5,1};
    std::cout << "Original Vector: " ;
    solution.print(inputs);
    std::cout << "| RemoveDuplicate(Set): " ;
    solution.RemoveDuplicateSet(inputs);
    
    std::cout << "" << std::endl;
    
    inputs = {1,5,6,7};
    std::cout << "Original Vector: " ;
    solution.print(inputs);
    std::cout << "| ReverseOrder: " ;
    solution.ReverseOrder(inputs);

    std::cout << "" << std::endl;

    inputs = {1,2,3,4,5};
    std::cout << "Original Vector: " ;
    solution.print(inputs);
    std::cout << "| RemoveOdd: " ;
    solution.RemoveOdd(inputs);

    std::cout<< "" << std::endl;

    inputs = {1,2,3};
    std::vector<int> inputs2 = {4,5,6};
    std::cout << "Original Vector1: " ;
    solution.print(inputs);
    std::cout << ", Vector2: " ;
    solution.print(inputs2);
    std::vector<int> concatResult = solution.Concatenate(inputs,inputs2);
    std::cout << "| Concatenating: " ;
    solution.print(concatResult);

    std::cout<< "" << std::endl;

    inputs = {1,2,2,3,4};
    inputs2 = {3,4,5,3,6};
    std::cout << "Original Vector1: " ;
    solution.print(inputs);
    std::cout << ", Vector2: " ;
    solution.print(inputs2);
    std::vector<int> unionVector = solution.Interset(inputs,inputs2);
    std::cout << "| Union: " ;
    solution.print(unionVector);
    
    std::cout<< "" << std::endl;

    return 0;
}