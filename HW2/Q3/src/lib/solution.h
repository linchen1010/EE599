#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  void print(std::vector<int> &input);
  void RemoveDuplicate(std::vector<int> &inputs);
  void RemoveDuplicateSet(std::vector<int> &inputs);
  void ReverseOrder(std::vector<int> &inputs);
  void RemoveOdd(std::vector<int> &inputs);
  std::vector<int> Concatenate(std::vector<int> &inputs, std::vector<int> &inputs2);
  std::vector<int> Interset(std::vector<int> &inputs1, std::vector<int> &inputs2);
  
};

#endif