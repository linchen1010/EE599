#include "solution.h"

void Solution::printStar() {
  int n = 0;
  while(n < 70) {
    std::cout << "*" ;
    n++;
  }
  std::cout << "" << std::endl;
}

//print vector
void Solution::print(std::vector<int> inputs) {
  Solution s;
  int size = 0;
  s.printStar();
  std::cout << "Vector: " ;
  for(auto n : inputs) {
    if(size==inputs.size()-1) {
      std::cout << n << std::endl;
    }
    else {
      std::cout << n << ", ";
      size++;
    }
  }
  s.printStar();
}

void Solution::printMenu() {
  Solution s;
  std::cout << "Please Choose any of the following options:" << std::endl;
  std::cout << "  1. What is the first element?" << std::endl;
  std::cout << "  2. What is the last element?" << std::endl;
  std::cout << "  3. What is the current element?" << std::endl;
  std::cout << "  4. What is the ith element from the current location?" << std::endl;
  std::cout << "  5. Exit." << std::endl;
  s.printStar();
}



