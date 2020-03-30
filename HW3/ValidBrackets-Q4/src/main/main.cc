#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::string input1 = "])";
  std::string input2 = "(a+b)[c*d]{5g+h}";
  std::string input3 = "(a+b]";
  std::string input4 = "(7h+[5c)+7]";
  std::string input5 = "{2k+[5j]}";
  std::string input6 = "{2k++[5--*j]}";
  std::string input7 = "(a,,b]";

  if(solution.ValidBrackets(input1))
    std::cout << "true" << std::endl;
  else {
    std::cout << "false" << std::endl;
  }

  if(solution.ValidBrackets(input2))
    std::cout << "true" << std::endl;
  else {
    std::cout << "false" << std::endl;
  }
  
  if(solution.ValidBrackets(input3))
    std::cout << "true" << std::endl;
  else {
    std::cout << "false" << std::endl;
  }
  
  if(solution.ValidBrackets(input4))
    std::cout << "true" << std::endl;
  else {
    std::cout << "false" << std::endl;
  }

  if(solution.ValidBrackets(input5))
    std::cout << "true" << std::endl;
  else {
    std::cout << "false" << std::endl;
  }

  if(solution.ValidBrackets(input6))
    std::cout << "true" << std::endl;
  else {
    std::cout << "false" << std::endl;
  }

  if(solution.ValidBrackets(input7))
    std::cout << "true" << std::endl;
  else {
    std::cout << "false" << std::endl;
  }

  return 0;
}