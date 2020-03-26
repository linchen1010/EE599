#include "solution.h"

int MaxHeap::GetLeftIndex(int i){
  if( (2*i) + 1 >= data_.size()) {
    return -1;
  }
  return (2 * i) + 1;
}

int MaxHeap::GetRightIndex(int i) {
  if((2*i) + 2 >= data_.size()) {
    return -1;
  }
  return (2 * i) + 2;
}

int MaxHeap::GetParentIndex(int i) {
  if(i == 0) {
    return -1;
  }
  return (i - 1) / 2;
}

int MaxHeap::GetLargestChildIndex(int i) {
  if( (2*i) + 1 >= data_.size() || (2*i) + 2 >= data_.size()) {
    return -1;
  }
  else if(data_[2*i+1] > data_[2*i+2]) {
      return (2 * i) + 1; // left child is greater
  }
  else if (data_[2*i+2] > data_[2*i+1]) {
      return (2 * i) + 2; // right child is greater
  }
}

int MaxHeap::GetLeft(int i){
  if( (2*i) + 1 >= data_.size() || (2*i) + 2 >= data_.size()) {
    return -1;
  }
  else {
    return data_[GetLeftIndex(i)];
  }
}

int MaxHeap::GetRight(int i){
  if( (2*i) + 1 >= data_.size() || (2*i) + 2 >= data_.size()) {
    return -1;
  }
  else {
    return data_[GetRightIndex(i)];
  }
} 

int MaxHeap::GetParent(int i){
  if(i == 0) {
    return -1;
  }
  else {
    return data_[GetParentIndex(i)];
  }
} 

int MaxHeap::top() {
  if(data_.size() == 0) {
    return INT_MAX;
  }
  else {
    return data_[0];
  }
}

void MaxHeap::push(int v) {
  if(data_.size()==0) {
    data_.push_back(v);
  }
  else {
    data_.push_back(v);
    TrickleUp(data_.size()-1);
  }
}

void MaxHeap::pop() {
  if(data_.size()==0) {
    std::cout << "Heap is Empty!" << std::endl;
    return;
  }
  else {
    data_[0] = data_[data_.size()-1];
    data_.pop_back();
    TrickleDown(0);
  }
}

void MaxHeap::TrickleUp(int i) {
  while(i != 0 && GetParent(i) < data_[i]) {
    swap(data_[i], data_[GetParentIndex(i)]);
    i = GetParentIndex(i);
  }
}

void MaxHeap::TrickleDown(int i) {
  while(data_[i] < data_[GetLargestChildIndex(i)]) {
    swap(data_[i], data_[GetLargestChildIndex(i)]);
    i = GetLargestChildIndex(i)-1;
  }
}

void MaxHeap::swap(int &i, int &k) {
  if(i!=0&&k!=0) {
    int temp;
    temp = i;
    i = k;
    k = temp;
  }
  else
    return;
}

void MaxHeap::print() {
  for(auto n : data_) {
    std::cout << n << " ";
  }
  std::cout << " " << std::endl;
}