#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <iostream>

// Person class is defined for demonstration
class MaxHeap {
public:
  MaxHeap() {}; // default constructor
  
  int GetParentIndex(int i);
  int GetLeftIndex(int i);
  int GetRightIndex(int i);
  int GetLargestChildIndex(int i);

  int GetLeft(int i);
  int GetRight(int i);
  int GetParent(int i);
  
  int top();
  void push(int v);
  void pop();
  void TrickleUp(int i);
  void TrickleDown(int i);

  void swap(int &i, int &k);
  void print();

  std::vector<int> data_; // switch to public is more convenient for GTEST, don't call at main
  
private:
  //std::vector<int> data_;
};

#endif