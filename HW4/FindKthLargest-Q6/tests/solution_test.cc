#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindKthLargestShould, KisNormal) {
  Solution solution;
  std::vector<int> inputs = {10,3,5,6,9,4,7};
  int actual = solution.FindKthLargest(inputs,2);
  int expected = 9;
  EXPECT_EQ(expected, actual);
}

TEST(FindKthLargestShould, KisNormal_2) {
  Solution solution;
  std::vector<int> inputs = {9,2,5,6,1,4,7};
  int actual = solution.FindKthLargest(inputs,2);
  int expected = 7;
  EXPECT_EQ(expected, actual);
}

TEST(FindKthLargestShould, KSmallerThanOne) {
  Solution solution;
  std::vector<int> inputs = {9,2,5,6,1,4,7};
  int actual = solution.FindKthLargest(inputs,0);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(FindKthLargestShould, KGreaterThanInputSize) {
  Solution solution;
  std::vector<int> inputs = {9,2,5,6,1,4,7};
  int actual = solution.FindKthLargest(inputs,10);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}