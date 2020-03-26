#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<int> inputs = {1,3,2,4};
  int sum = 5;
  std::vector<int> result = solution.TwoSum(inputs, sum);
  int n = 0;

  for (auto it=result.begin();it!=result.end();it++) {
      n++;
      if(n == 3) {
        std::cout << "or ";
        n = 1;
      }
      std::cout << *it << " "  ;
  }

  std::cout << "" << std::endl;
  
  
  return EXIT_SUCCESS;
}