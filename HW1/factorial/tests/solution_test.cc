#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Factorialtest, inputsmallerthanZero) {
  Solution solution;
  int actual = solution.Factorial(-2);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(Factorialtest, inputEqualZero) {
  Solution solution;
  int actual = solution.Factorial(0);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(Factorialtest, inputGreaterthanZero) {
  Solution solution;
  int actual = solution.Factorial(5);
  int expected = 120;
  EXPECT_EQ(expected, actual);
}

TEST(Factorialtest, RecursiveInputsmallerthanZero) {
  Solution solution;
  int actual = solution.Factorial(-10);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(Factorialtest, RecursiveInputEqualZero) {
  Solution solution;
  int actual = solution.Factorial(0);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(Factorialtest, RecusiveInputGreaterthanZero) {
  Solution solution;
  int actual = solution.Factorial(6);
  int expected = 720;
  EXPECT_EQ(expected, actual);
}
