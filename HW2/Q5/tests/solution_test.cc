#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SwapIndex, ReturnSwapIndex) {
  Solution solution;
  std::string input = "ABCDE";
  std::string actual = solution.SwapIndex(input,1,3);
  std::string expected = "ADCBE";
  EXPECT_EQ(expected, actual);
}

TEST(SwapIndex, SwapIndexErrorsize) {
  Solution solution;
  std::string input = "ABCDE";
  std::string actual = solution.SwapIndex(input,1,6);
  std::string expected = "Input indices are not correct!!!";
  EXPECT_EQ(expected, actual);
}

TEST(ReverseTest, Reverse) {
  Solution solution;
  std::string input = "ABCDE";
  solution.ReverseString(input);
  std::string expected = "EDCBA";
  EXPECT_EQ(expected, input);
}

TEST(ToLowerTest, ToLower) {
  Solution solution;
  std::string input = "ABCDE1999";
  solution.ToLower(input);
  std::string expected = "abcde1999";
  EXPECT_EQ(expected, input);
}



