#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MyNameShould, ReturnMyName) {
  Solution solution;
  std::string actual = solution.PrintMyName();
  std::string expected = "Name: Chun-Hao Lai / Email: laichunh@usc.edu";
  EXPECT_EQ(expected, actual);
}