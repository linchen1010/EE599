#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MedianRearrangeTest, SortedVector) {
  Solution solution;
  std::vector<int> input = {1,2,3,4,5,6,7};
  solution.MedianRearrange(input);
  std::vector<int> expected = {3,2,1,4,7,6,5};
  EXPECT_EQ(expected, input);
}

TEST(MedianRearrangeTest, unSortedVector) {
  Solution solution;
  std::vector<int> input = {4,5,6,7,1,2,3};
  solution.MedianRearrange(input);
  std::vector<int> expected = {3,2,1,4,7,6,5};
  EXPECT_EQ(expected, input);
}