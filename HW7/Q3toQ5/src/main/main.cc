#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  std::map<int, std::set<int>> vertices {
    {0, {1, 2, 5}},
    {1, {0, 2, 3}},
    {2, {0, 1, 3}},
    {3, {1, 2, 4, 6}},
    {4, {3}},
    {5, {0}},
    {6, {3}}
  };
  // Q3
  Graph g(vertices);
  std::map<int, int> shortestDistance = g.shortestDistance(0);
  std::cout << "---Q3---\nShortest distance from source 0: " << std::endl;
  for(auto it = shortestDistance.begin(); it != shortestDistance.end(); it++) {
    std::cout << "(" << it->first << "," << it->second << ") " ;
  }
  std::cout << "\n";
  std::cout << "Shortest path from 0 to other nodes: " << std::endl;
  std::map<int, std::vector<int>> shortestPath = g.shortestPath(0);
  for(auto it = shortestPath.begin(); it != shortestPath.end(); it++) {
    std::cout << it->first << ":";
    for(auto &n : it->second) {
      std::cout << n << " ";
    }
    std::cout << "\n";
  }

  // Q4
  std::map<int, std::set<int>> verticesQ4 {
    {7, {5, 6}},
    {6, {3, 4}},
    {5, {2, 4}},
    {4, {}},
    {3, {1}},
    {2, {1}},
    {1, {0}},
    {0, {}}
  };

  Graph g2(verticesQ4);
  std::cout << "---Q4---" << std::endl;
  std::vector<int> topo = g2.topologicalSort();
  std::cout << "Root Node: " << topo[0] << std::endl;
  std::cout << "Topological Order: " ;
  for(auto n : topo) {
    std::cout << n << " " ;
  }
  std::cout << "\n";

  // Q5
  std::map<int, std::set<int>> verticesQ5 {
    {0, {4, 5, 1}},
    {5, {6, 0}},
    {6, {5 ,7, 8}},
    {7, {6, 8}},
    {8, {6, 7, 2}},
    {1, {0, 2, 3}},
    {2, {1, 3, 8}},
    {3, {1, 2}},
    {4, {0}}
  };

  Graph g3(verticesQ5);
  Graph g4;
  std::vector<bool> res = g4.shortPath(g3);
  std::cout << "---Q5---" << std::endl;
  for(auto n : res) {
    if(n == true) {
      std::cout << "true " ;
    }
    else 
      std::cout << "false ";
  }
  std::cout << "\n";
  

  return EXIT_SUCCESS;
}