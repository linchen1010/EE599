#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(InorderShould, DFSpathRecursiveExample) {
  std::vector<int> inputs = {8,3,10,1,6,14,4,7,13};
  BST tree(inputs);
  tree.printInorder(tree.root_);
  std::vector<int> actual = tree.DFSpath;
  std::vector<int> expected = {1,3,4,6,7,8,10,13,14};

  
  EXPECT_EQ(expected, actual);
}

TEST(InorderShould, DFSpathRecursiveExample2) {
  std::vector<int> inputs = {3,2,20,15,27,14,28};
  BST tree(inputs);
  tree.printInorder(tree.root_);
  std::vector<int> actual = tree.DFSpath;
  std::vector<int> expected = {2,3,14,15,20,27,28};

  
  EXPECT_EQ(expected, actual);
}

TEST(InorderShould, DFSpathExample) {
  std::vector<int> inputs = {8,3,10,1,6,14,4,7,13};
  BST tree(inputs);
  tree.NonRecursivePrintInorder(tree.root_);
  std::vector<int> actual = tree.DFSpath;
  std::vector<int> expected = {1,3,4,6,7,8,10,13,14};

  
  EXPECT_EQ(expected, actual);
}

TEST(InorderShould, DFSpathExample2) {
  std::vector<int> inputs = {3,2,20,15,27,14,28};
  BST tree(inputs);
  tree.NonRecursivePrintInorder(tree.root_);
  std::vector<int> actual = tree.DFSpath;
  std::vector<int> expected = {2,3,14,15,20,27,28};

  
  EXPECT_EQ(expected, actual);
}

TEST(MaxDepthShould, MaxDepthExample) {
  std::vector<int> inputs = {8,3,10,1,6,14,4,7,13};
  BST tree(inputs);
  tree.NonRecursivePrintInorder(tree.root_);
  int actual = tree.MaxDepth;
  int expected = 4;

  
  EXPECT_EQ(expected, actual);
}

TEST(MaxDepthShould, MaxDepthExample2) {
  std::vector<int> inputs = {8,3,10,1,6,14,4,7,13,12};
  BST tree(inputs);
  tree.NonRecursivePrintInorder(tree.root_);
  int actual = tree.MaxDepth;
  int expected = 5;

  
  EXPECT_EQ(expected, actual);
}