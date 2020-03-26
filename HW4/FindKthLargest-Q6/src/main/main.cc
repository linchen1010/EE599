#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  Solution solution;
  std::vector<int> inputs = {0,2,1,5,6,3};
  std::vector<int> inputs2 = {-2,3,-1,2,5,6,10};
  
  std::cout << solution.FindKthLargest(inputs, 2) << std::endl;
  std::cout << solution.FindKthLargest(inputs2, 3) << std::endl;

  return EXIT_SUCCESS;
}