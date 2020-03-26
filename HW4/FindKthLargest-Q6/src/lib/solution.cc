#include "solution.h"

int Solution::FindKthLargest(const std::vector<int> &inputs, int k) {
  std::priority_queue<int> temp;
  for(auto n : inputs) {
    temp.push(n);
  }

  for(int i = 1; i < k; i++) {
    temp.pop();
  }

  if(k < 1 || k > inputs.size()) {
    std::cout << "K is invalid, K should be greater than 1 and smaller than input size" << std::endl;
    return -1;
  }
  
  return temp.top();
}

void Solution::print(std::vector<int> inputs) {
  for (auto n : inputs) {
    std::cout << n << " " ;
  }
  std::cout << "\n" ;
}
