#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  int add(int inputFirst, int inputSecond);
  std::string add(std::string str1, std::string str2);
  std::string add(int inputFirst, std::string str2);
  std::string add(std::string str1, int inputSecond);
};

#endif