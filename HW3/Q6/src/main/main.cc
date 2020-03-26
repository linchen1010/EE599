#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<int> inputs = {1,4,5,23,100,12,18,175};
  solution.print(inputs);
  solution.printMenu();
  int step = 0;
  std::vector<int>::iterator first = inputs.begin();
  std::vector<int>::iterator end = inputs.end()-1;
  std::vector<int>::iterator ptr = inputs.begin();
  int i = 0;
  std::cin >> step;
  while(step != 5) {
    switch(step) {
      case 1:
        std::cout << "Output: " << *first << "\n" << std::endl;
        solution.print(inputs);
        solution.printMenu();
        ptr = first;
        break;
      case 2:
        std::cout << "Output: " << *end << "\n" << std::endl;;
        solution.print(inputs);
        solution.printMenu();
        ptr = end;
        break;
      case 3:
        std::cout << "Output: " << *ptr << "\n" << std::endl;;
        solution.print(inputs);
        solution.printMenu();
        break;
      case 4:
        std::cout << "Enter ith value of i::" << std::endl;
        std::cin >> i;
        if(ptr+i<inputs.end()) {
          std::cout << "Output: " << *(ptr+i) << "\n" << std::endl;;
          ptr = ptr+i;
          solution.print(inputs);
          solution.printMenu();
        }
        else {
          std::cout << "Sorry! You cannot traverse " << i << " elements from your current location." << std::endl;
          solution.print(inputs);
          solution.printMenu();
        }
        break;
        
    }
    std::cin >> step;
  }
  
  std::cout << "Exit !" << std::endl;
  
}