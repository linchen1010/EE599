#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(ValidBracketsTest, EmptyString) {
  Solution solution;
  std::string str = "" ;
  bool actual = solution.ValidBrackets(str);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(ValidBracketsTest, testcase1) {
  Solution solution;
  std::string str = "(a,,[},)" ;
  bool actual = solution.ValidBrackets(str);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(ValidBracketsTest, testcase2) {
  Solution solution;
  std::string str = "{(a)[,,].1}" ;
  bool actual = solution.ValidBrackets(str);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

