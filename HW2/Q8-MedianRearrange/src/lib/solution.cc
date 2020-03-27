#include "solution.h"

//---do several sort, the O(n) should be O(nlogn)---//
void Solution::MedianRearrange(std::vector<int> &inputs) {
  std::sort(inputs.begin(),inputs.end());
  int median = 0;
  if (inputs.size() == 0) {
    std::cout << "Error Input" << std::endl;
  }
  else if (inputs.size() % 2  != 0) { // odd numbers
    median =  inputs[inputs.size()/2]; 
  }
  else if(inputs.size() % 2 == 0) { // even numbers
    median = ( inputs[inputs.size()/2 - 1] + inputs[inputs.size()/2] ) / 2  ;
  }

  std::cout << "Median:" << median << std::endl;
  std::sort(inputs.begin(),inputs.begin()+inputs.size()/2, std::greater<int>() );
  std::sort(inputs.begin()+inputs.size()/2+1,inputs.end(), std::greater<int>());

  std::cout << "Rearrange:" << std::endl;
  for(auto n : inputs) {
    std::cout << n << " " ;
  }

  std::cout << "" << std::endl ;
  
  
}

