#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  double FindMedian(std::vector<double> &inputs);
  std::string DoubleSwap(std::string &str, char c1, char c2);
};

class Graph {
public:
  void BFS(int root);
};

#endif