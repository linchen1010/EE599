#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(addTest, twoInt) {
  Solution solution;
  int actual = solution.add(5,10);
  EXPECT_EQ(15, actual);
}

TEST(addTest, twoString) {
  Solution solution;
  std::string actual = solution.add("app","le");
  EXPECT_EQ("apple", actual);
}

TEST(addTest, IntString) {
  Solution solution;
  std::string actual = solution.add(32,"Int");
  EXPECT_EQ("32Int", actual);
}

TEST(addTest, StringInt) {
  Solution solution;
  std::string actual = solution.add("EE",569);
  EXPECT_EQ("EE569", actual);
}