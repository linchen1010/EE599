#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <iostream>
#include <stack>
#include <queue>

// Q3, Q4
class Graph {
public:
  Graph(std::map<int, std::set<int>> &vertices) : v_(vertices) {}
  std::map<int, std::set<int>> v_; 
  void NonRecursiveDFS(int root);
  std::vector<int> DFS_ALL();

  std::vector<int> DFS_Path_Test; // store the DFS path, convenient to test
  void print(const std::vector<int> &inputs); // print vector
};

// Q5, Q6
class Solution {
public:
  void Partition(std::vector<int> &inputs, int i);
  void Swap(int &a, int &b);
  void print(const std::vector<int> &inputs);
  bool FindPath(const std::vector<std::vector<int>> &maze, std::pair<int, int> start, std::pair<int, int> end);
private:

 
};

#endif