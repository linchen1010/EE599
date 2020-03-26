#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST (FindMedianTest, HandleOddNumber) {
  Solution solution;
  std::vector<double> inputs = {1,2,3,4,5};
  EXPECT_EQ(solution.FindMedian(inputs), 3);
}

TEST(FindMedianTest, HandleEvenNumber) {
  Solution solution;
  std::vector<double> inputs = {1,2,3,4,5,6};
  EXPECT_EQ(solution.FindMedian(inputs), 3.5);
}

TEST(FindMedianTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<double> inputs = {};
  EXPECT_EQ(solution.FindMedian(inputs), -1);
}