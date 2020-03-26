#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  std::vector<int> inputs = {8,3,10,1,6,14,4,7,13};
  BST BFSTree(inputs);
  
  std::cout << "---Question4---\nPreorder: " << std::endl; 
  BFSTree.printPreorder(BFSTree.root_); // inorder to check the element of orginal tree is same as example
  std::cout << "\n" ;
  std::cout << "BFS: " << std::endl;
  BFSTree.BFS(BFSTree.root_);
  
  std::cout << "\n" ;

  

  return EXIT_SUCCESS;
}