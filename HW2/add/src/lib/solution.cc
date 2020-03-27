#include "solution.h"
#include <iostream>
#include <string>

// add two integer
int Solution::add(int inputFirst, int inputSecond) {
  return inputFirst + inputSecond;
}
// concatenate two string
std::string Solution::add(std::string str1, std::string str2) {
  return str1 + str2;
}
// concatenate a  integer and a string
std::string Solution::add(int inputFirst, std::string str2) {
  return  std::to_string(inputFirst) + str2;
}
// concatenate a  integer and a string
std::string Solution::add(std::string str1, int inputSecond) {
  return  str1 + std::to_string(inputSecond);
}

