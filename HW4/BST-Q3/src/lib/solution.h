#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <queue>


struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x) , left(NULL), right(NULL) {}
};



class BST {
public:
  BST() {};

  // Inserts elements of initial_values
  // one by one into the Ttree
  BST(std::vector<int> initial_valuse);
  ~BST(){};
  void push(int key); // Inserts a key inside Tree
  bool find(int key); // Returns true of key is in the tree
  bool erase(int key); // Removes the key from the tree. If not successful, return false.
  void printPreorder(TreeNode *node);
  


  TreeNode *root_ = nullptr;
private:
  bool find_helper(TreeNode *root, int key); //find_helper
  void insert(TreeNode *&root, int v); // push_helper
  TreeNode *minNode(TreeNode *node); // erase_helper
  TreeNode *erase_helper(TreeNode* root, int key); //erase_helper
  
};

#endif