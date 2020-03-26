#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(BSTShould, BSTPushTest) {
  std::vector<int> inputs = {3,1,2};
  BST tree(inputs);
  tree.push(4);
  int actual = tree.root_->right->val;
  int expected = 4;
  EXPECT_EQ(expected, actual);
  //  3
  // 1 4(push)
  //  2
}

TEST(BSTShould, BSTPushTest2) {
  std::vector<int> inputs = {3,1,2};
  BST tree(inputs);
  tree.push(4);
  tree.push(5);
  int actual = tree.root_->right->right->val;
  int expected = 5;
  EXPECT_EQ(expected, actual);
  //  3
  // 1 4
  //  2 5(push)
}

TEST(BSTShould, BSTFIndTest) {
  std::vector<int> inputs = {3,1,2};
  BST tree(inputs);
  bool actual = tree.find(3);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(BSTShould, BSTFIndTest2) {
  std::vector<int> inputs = {3,1,2};
  BST tree(inputs);
  bool actual = tree.find(5);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(BSTShould, BSTEraseTest) {
  std::vector<int> inputs = {3,1,2,4,5};
  BST tree(inputs);
  tree.erase(4);
  int actual = tree.root_->right->val;
  int expected = 5;
  EXPECT_EQ(expected, actual);
  //  3                3
  // 1 4(erased) -->  1 5
  //  2 5              2   
}

TEST(BSTShould, BSTErase2Test) {
  std::vector<int> inputs = {3,1,2,4,5};
  BST tree(inputs);
  tree.erase(5);
  int actual = tree.root_->right->val;
  int expected = 4;
  EXPECT_EQ(expected, actual);
  //  3                 3
  // 1 4          -->  1 4
  //  2 5(erased)     2   
}

TEST(BSTShould, BSTEraseFlaseTest) {
  std::vector<int> inputs = {3,1,2,4,5};
  BST tree(inputs);
  bool actual = tree.erase(100); // 100 is not in tree, erase will return false
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

