#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  MaxHeap heap;
  heap.push(1);
  heap.push(2);
  heap.push(3);
  heap.push(4);
  heap.push(5);
  heap.push(6);
  heap.push(7);
  heap.push(8);
  
  heap.print();
  std::cout << "top: " << heap.top() << std::endl;
  std::cout << "left: " << heap.GetLeft(0) << std::endl;
  std::cout << "Right: " << heap.GetRight(0) << std::endl;
  std::cout << "Parent: " << heap.GetParent(0) << std::endl;
  std::cout << "-------------pop-------------" << std::endl;
  heap.pop();
  heap.print();
  std::cout << "top: " << heap.top() << std::endl;
  std::cout << "left: " << heap.GetLeft(0) << std::endl;
  std::cout << "Right: " << heap.GetRight(0) << std::endl;
  std::cout << "Parent: " << heap.GetParent(0) << std::endl;
  std::cout << "-------------pop-------------"  << std::endl;
  heap.pop();
  heap.print();
  std::cout << "top: " << heap.top() << std::endl;
  std::cout << "left: " << heap.GetLeft(0) << std::endl;
  std::cout << "Right: " << heap.GetRight(0) << std::endl;
  std::cout << "Parent: " << heap.GetParent(0) << std::endl;
  std::cout << "-----------------------------" << std::endl;
  std::cout << "Parent of (3th element): " << heap.GetParent(2) << std::endl;
  
  
  //std::cout << "\nsize: " << heap.data_.size() << std::endl;
  return EXIT_SUCCESS;
}