#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  std::vector<int> inputs = {3,2,20,15,27};
  std::vector<int> inputs2 = {8,3,10,1,6,14,4,7,13};
  BST mytree(inputs); // constructor initialized with inputs vector
  std::cout << "Recursive way:" << std::endl;
  mytree.printInorder(mytree.root_);
  std::cout<< "\n";
  std::cout << "Non-Recursive way:" << std::endl;
  mytree.NonRecursivePrintInorder(mytree.root_);
  std::cout << "\nMaxDepth: " << mytree.MaxDepth << std::endl;
  std::cout<< "\n";

  std::vector<int> a = {1,2,3,4,5};
  int b = a.size()/2;

  std::cout << "\n" << b ;


  

  return EXIT_SUCCESS;
}