#include "solution.h"

BST::BST(std::vector<int> initial_valuse) {
  std::vector<int>::iterator ptr=initial_valuse.begin();
  TreeNode *node = new TreeNode(*ptr);
  root_ = node;
  TreeNode *temp = root_;

  for(ptr = initial_valuse.begin()+1; ptr!=initial_valuse.end(); ptr++) {
      insert(temp, *ptr);
  }
  // TreeNode *temp1 = root_;
  //   printPreorder(temp1);
}

void BST::insert(TreeNode *&root, int v) {
  if (root == nullptr) {
    root = new TreeNode(v);
  }
  else if(v < root->val) {
    insert(root->left, v);
  }
  else if(v > root->val) {
    insert(root->right, v);
  }
}

void BST::printPreorder(TreeNode *node) { 

    if (node == NULL) 
        return; 
  
    /* first print data of node */
    std::cout << node->val << " "; 
  
    /* then recur on left sutree */
    printPreorder(node->left);  
  
    /* now recur on right subtree */
    printPreorder(node->right); 
}


void BST::BFS(TreeNode *node) {
  if (node == root_) {
    path.push(node);

  }
  // if node has two children
  if(node->left!=nullptr && node->right!=nullptr) {
    path.push(node->left);
    path.push(node->right);
  }
  // if node has left child
  else if(node->left!=nullptr && node->right==nullptr) {
    path.push(node->left);
  }
  // if node has right child
  else if(node->right!=nullptr && node->left==nullptr) {
    path.push(node->right);
  }
  std::cout << path.front()->val << " ";
  BFSpath.push_back(path.front()->val);
  path.pop();

  if(path.empty()) {
    return ;
  }

  BFS(path.front());
}