#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  std::vector<int> inputs = {3,4,1,2,5};
  std::vector<int> inputs2 = {8,3,10,1,6,14,4,7,13};
  BST mytree(inputs); // constructor initialized with inputs vector
  mytree.printPreorder(mytree.root_);
  std::cout << "\npush:0 & 100";
  mytree.push(0);
  mytree.push(100);
  std::cout << "\n";
  mytree.printPreorder(mytree.root_);
  if(mytree.find(100)) {
    std::cout << "\n100 is in tree";
  } else std::cout << "\n100 is not in tree" ;
  if(mytree.find(50)) {
    std::cout << "\n50 is in tree";
  } else std::cout << "\n50 is not in tree" << std::endl;
  std::cout << "erase:3" << std::endl;
  mytree.erase(3);
  mytree.printPreorder(mytree.root_);
  std::cout << "\nerase:0" << std::endl;
  mytree.erase(0);
  mytree.printPreorder(mytree.root_);
  std::cout << "\n" ;
  

  return EXIT_SUCCESS;
}