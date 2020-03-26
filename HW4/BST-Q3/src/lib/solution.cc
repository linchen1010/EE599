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

void BST::push(int key) {
  TreeNode *root = root_;
  insert(root,key);
}

bool BST::find(int key) {
  TreeNode *root = root_;
  if(find_helper(root,key)) {
    return true;
  } else return false;
}

bool BST::find_helper(TreeNode *root, int key) {
  if(root == nullptr) {
    return false;
  }
  if(root->val == key) {
    return true;
  }
  if(key < root->val) {
    return find_helper(root->left, key);
  } 
  else {
    return find_helper(root->right, key);
  }
}

bool BST::erase(int key){
  TreeNode *root = root_;
  erase_helper(root,key);
}

TreeNode *BST::minNode(TreeNode *node) { 
  TreeNode* current = node; 
  
  /* loop down to find the leftmost leaf */
  while (current && current->left != NULL) {
    current = current->left; 
  }
  return current; 
}

TreeNode *BST::erase_helper(TreeNode *root, int key) { 
  if(root == nullptr) {
    return root;
  }
  // Case 1: deleted node is a leaf (no child)
  if (key < root->val) {
    root->left = erase_helper(root->left, key); 
  }
  else if (key > root->val) {
    root->right = erase_helper(root->right, key); 
  }
  // Case 2: deleted node with one child
  else  { 
    if (root->left == nullptr) { 
      TreeNode *temp = root->right; 
      delete(root); 
      return temp; 
    }
    else if (root->right == nullptr) { 
      TreeNode *temp = root->left; 
      delete(root); 
      return temp; 
    } 
    // Case 3: deleted node with two children: 
    TreeNode *temp = minNode(root->right); 

    // Copy the inorder successor's content to this node 
    root->val = temp->val; 

    // Delete the inorder successor 
    root->right = erase_helper(root->right, temp->val); 
  }
  return root;
} 
