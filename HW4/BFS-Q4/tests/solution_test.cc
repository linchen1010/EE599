#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(BFSShould, BFSpathExample) {
  std::vector<int> inputs = {8,3,10,1,6,14,4,7,13};
  BST tree(inputs);
  tree.BFS(tree.root_);
  std::vector<int> actual = tree.BFSpath;
  std::vector<int> expected = {8,3,10,1,6,14,4,7,13};
  
  EXPECT_EQ(expected, actual);
}

TEST(BFSShould, BFSpathTest1) {
  std::vector<int> inputs = {6,3,2,4,7};
  BST tree(inputs);
  tree.BFS(tree.root_);
  std::vector<int> actual = tree.BFSpath;
  std::vector<int> expected = {6,3,7,2,4};
  
  EXPECT_EQ(expected, actual);
}

TEST(BFSShould, BFSpathTest2) {
  std::vector<int> inputs = {8,3,2,5,4,7,10,14,12};
  BST tree(inputs);
  tree.BFS(tree.root_);
  std::vector<int> actual = tree.BFSpath;
  std::vector<int> expected = {8,3,10,2,5,14,4,7,12};
  
  EXPECT_EQ(expected, actual);
}