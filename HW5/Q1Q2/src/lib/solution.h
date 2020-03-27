#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <stack>


struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x) , left(NULL), right(NULL) {}
};



class BST {
public:
  int level = 0;
  int MaxDepth = 0;
  BST() {};

  // Inserts elements of initial_values
  // one by one into the Ttree
  BST(std::vector<int> initial_valuse);
  ~BST(){};
  void printPreorder(TreeNode *node);
  void printInorder(TreeNode *node);
  void NonRecursivePrintInorder(TreeNode *node);
  std::vector<int> DFSpath; 


  TreeNode *root_ = nullptr;
private:
  void insert(TreeNode *&root, int v); // push_helper
  std::stack<TreeNode*> path;
  
};

#endif