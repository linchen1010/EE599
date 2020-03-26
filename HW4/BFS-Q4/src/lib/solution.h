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
  void printPreorder(TreeNode *node);
  void BFS(TreeNode *node);
  std::vector<int> BFSpath; // this vector used to store BFS path, for latter Gtest


  TreeNode *root_ = nullptr;
  private:
  void insert(TreeNode *&root, int v); // push_helper
  std::queue<TreeNode*> path; // queue use for BFS
  
  
};

#endif