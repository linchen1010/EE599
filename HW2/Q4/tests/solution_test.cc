#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SwapTest, ReferenceSwap) {
  Solution solution;
  int x = 5;
  int y = 10;
  solution.Swap(x,y);
  int actual = x;
  int expected = 10;
  EXPECT_EQ(expected, actual);
}

