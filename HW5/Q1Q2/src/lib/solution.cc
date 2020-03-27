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
  
    /* then recur on left subtree */
    printPreorder(node->left);  
  
    /* now recur on right subtree */
    printPreorder(node->right); 
}

void BST::printInorder(TreeNode *node) { // recursive
  if(node == NULL) {
    return;
  }
  
  // recursive on left subtree
  printInorder(node->left);
  
  std::cout << node->val << " ";
   DFSpath.push_back(node->val);

  // recursive on right subtree
  printInorder(node->right);

}

void BST::NonRecursivePrintInorder(TreeNode *node) {
  level = 1;
  MaxDepth = 1;
  TreeNode* current = node;

  while(current != NULL || path.empty() != true) {
    while (current != NULL) {
      path.push(current);
      current = current->left;
      if(current!=NULL) {
        level++;
        if(MaxDepth < level) {
          MaxDepth = level;
        }
      }
    }
    std::cout << path.top()->val << " " ;
    current = path.top();
    if(current == root_) {
      level = 1;
    }
    DFSpath.push_back(current->val); // push back the path into vector in order for GTEST
    path.pop();
    if(current->right == NULL && current->left == NULL) {
      level--;
    }
    current = current->right;
    if(current!=NULL) {
        level++;
        if(MaxDepth < level) {
          MaxDepth = level;
        }
    }
  }
}

