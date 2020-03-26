#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <set>

class Graph {
public:
  Graph(std::map<int, std::set<int>> &vertices) : edge_map_(vertices) {}
  Graph() {}
  std::map<int, std::set<int>> edge_map_; 
  std::map<int, int> shortestDistance(int root);
  std::map<int, std::vector<int>> shortestPath(int root);
  std::vector<int> topologicalSort();
  std::vector<bool> shortPath(Graph g);
};

#endif