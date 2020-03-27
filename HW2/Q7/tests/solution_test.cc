#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMapTest, TestCase1) {
  Solution solution;
  std::string input1 = "extreme";
  std::string input2 = "egg";
  std::map <char, char> actual = solution.FindMap(input1, input2);
  std::map <char, char> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(FindMapTest, TestCase2) {
  Solution solution;
  std::string input1 = "harder";
  std::string input2 = "waiter";
  std::map <char, char> actual = solution.FindMap(input1, input2);
  std::map <char, char> expected = {};
  EXPECT_EQ(expected, actual);
}