#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TwoSumTest, TwoSumEmpty) {
  Solution solution;
  std::vector<int> inputs = {};
  std::vector<int> actual = solution.TwoSum(inputs,180);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(TwoSumTest, TwoSumOneResult) {
  Solution solution;
  std::vector<int> inputs = {3,7,11,15};
  std::vector<int> actual = solution.TwoSum(inputs,10);
  std::vector<int> expected = {0,1};
  EXPECT_EQ(expected, actual);
}

TEST(TwoSumTest, TwoSumEmptyResult) {
  Solution solution;
  std::vector<int> inputs = {3,7,11,15};
  std::vector<int> actual = solution.TwoSum(inputs,180);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(TwoSumTest, TwoSumtwoResult) {
  Solution solution;
  std::vector<int> inputs = {3,7,11,15};
  std::vector<int> actual = solution.TwoSum(inputs,18);
  std::vector<int> expected = {0,3,1,2};
  EXPECT_EQ(expected, actual);
}

TEST(TwoSumTest, TwoSumMultipleResult) {
  Solution solution;
  std::vector<int> inputs = {3,7,11,15,14,4};
  std::vector<int> actual = solution.TwoSum(inputs,18);
  std::vector<int> expected = {0,3,1,2,4,5};
  EXPECT_EQ(expected, actual);
}