#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<double> inputs = {1, 2, 3, 4, 5};
  std::cout << "inputs: {1, 2, 3, 4, 5,}, output: " << solution.FindMedian(inputs)
            << std::endl;

  inputs = {1, 2, 3, 4, 5, 6};
  std::cout << "inputs: {1, 2, 3, 4, 5, 6}, output: " << solution.FindMedian(inputs)
            << std::endl;

  inputs = {};
  std::cout << "inputs: {}, output: " << solution.FindMedian(inputs) << std::endl;

  std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

  for(auto n : v) {
    std::cout << n << " ";
  }
  std::string str = "aabbcc";
  std::cout << solution.DoubleSwap(str,'a','b');

  
  return 0;

  
}