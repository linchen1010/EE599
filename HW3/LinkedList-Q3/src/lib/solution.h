#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <iostream>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {} // val = x, next = nullptr
};

class SinglyLinkedList {
public:
  // default constructor
  SinglyLinkedList() {};
  
  SinglyLinkedList(const std::vector<int> &inputs, int i);

  ~SinglyLinkedList()   ; // destructor, cleans up
  bool empty();            // checks if empty
  int size();              // returns size
  void push_back(int i );  // inserts at the back
  void push_front(int i);  // inserts at the front
  void insert_after(ListNode *p, int i); // inserts value i after p
  void erase(ListNode *p); // Erase node p
  void pop_front();        // remove the first item
  void pop_back();         // remove the last item
  int back();              // returns the value of last item
  int front();             // returns the value of first item
  ListNode *GetBackPointer(); // return the poitner to last item

  // Returns pointer to i(th) element
  ListNode *GetIthPointer(int i);

  //print the list: ex. Empty list: {} List with item: {1, 2, 3}
  void print();

  ListNode *head_ = nullptr; //Pointer to the first element
  
  

private:
  
};

#endif