#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(PalindromeTest, PalindromeNumFalse) {
  Solution solution;
  std::string input = "1234567";
  std::string actual = solution.FindPalindrome(input);
  std::string expected = "False";
  EXPECT_EQ(expected, actual);
}

TEST(PalindromeTest, PalindromeNumFalse2) {
  Solution solution;
  std::string input = "12";
  std::string actual = solution.FindPalindrome(input);
  std::string expected = "False";
  EXPECT_EQ(expected, actual);
}

TEST(PalindromeTest, PalindromeNumTrue) {
  Solution solution;
  std::string input = "1234554321";
  std::string actual = solution.FindPalindrome(input);
  std::string expected = "True";
  EXPECT_EQ(expected, actual);
}

TEST(ApproximatePalindromeTest, AppPalindromeFalse) {
  Solution solution;
  std::string input = "a B,c,d e";
  std::string actual = solution.ApproximatePalindrome(input);
  std::string expected = "False";
  EXPECT_EQ(expected, actual);
}

TEST(ApproximatePalindromeTest, AppPalindromeTrue) {
  Solution solution;
  std::string input = "A,b,C,D d?c!b-a";
  std::string actual = solution.ApproximatePalindrome(input);
  std::string expected = "True";
  EXPECT_EQ(expected, actual);
}

