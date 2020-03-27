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
  std::cout << "Q3: " << std::endl;
  g.NonRecursiveDFS(0); //
  std::cout << "\n " << std::endl;

  //Q4
  std::cout << "Q4:" << std::endl;
  std::map<int, std::set<int>> vertices1 {
    {0, {1, 2, 5}},
    {1, {0, 2, 3}},
    {2, {0, 1, 3}},
    {3, {1, 2, 4, 6}},
    {4, {3}},
    {5, {0}},
    {6, {3}},
    {7, {}}
  };
  // 7 is not visited
  Graph g1(vertices1);
  std::vector<int> visited = g1.DFS_ALL();
  g1.print(visited);
  std::cout << "\n" << std::endl;;

  //Q5
  Solution s5;
  // ex 1
  std::cout << "Q5: " << std::endl; 
  std::vector<std::vector<int>> maze = {{1,1,0,0,0}, // true case
                                        {1,0,1,1,1},
                                        {1,1,0,0,1},
                                        {1,1,0,0,1},
                                        {1,1,1,1,1}};
  // ex 2
  std::vector<std::vector<int>> maze2 = {{1,1,0,0,0}, // false case
                                         {1,1,1,1,1},
                                         {0,1,0,0,1},
                                         {1,0,0,0,0},
                                         {1,1,1,1,1}};
  std::pair<int, int> start = {0,0};
  std::pair<int, int> end (4,4);
  std::pair<int, int> start2 = {1,2};
  std::pair<int, int> end2 (4,4);
  if(s5.FindPath(maze,start,end)) {
    std::cout << "true" << std::endl;
  }
  else {
    std::cout << "false" << std::endl;
  }
  if(s5.FindPath(maze2,start2,end2)) {
    std::cout << "true" << std::endl;
  }
  else {
    std::cout << "false" << std::endl;
  }

  std::cout << "\n" ;

  // Q6
  
  std::cout << "Q6: " << std::endl;
  Solution s;
  int i = 1;
  std::vector<int> v = {9,7,5,6,12,2,14,3,10,11};
  s.print(v);
  std::cout << " ,i = " << i;
  std::cout << "\n";
  s.Partition(v,i);
  s.print(v);
  std::cout << "\n";

  v = {9,7,5,6,12,2,14,3,10,11};
  s.print(v);
  i = 3;
  s.Partition(v,i);
  std::cout << " ,i = " << i << std::endl;
  s.print(v);

  std::cout << "\n";
  
}