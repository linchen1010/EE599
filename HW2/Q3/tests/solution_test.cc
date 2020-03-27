#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
#include <string>

TEST(RemoveDuplicate, NoDuplicateVector) {
  Solution solution;
  std::vector<int> inputs = {1,3,2,3,5,5,6,7,6};
  solution.RemoveDuplicate(inputs);
  std::vector<int> expected = {1,3,2,5,6,7}; 
  EXPECT_EQ(expected, inputs);
}

TEST(RemoveDuplicateSet, NoDuplicateVectorSet) {
  Solution solution;
  std::vector<int> inputs =  {1,2,2,4};
  solution.RemoveDuplicateSet(inputs);
  std::vector<int> expected = {1,2,4};
  EXPECT_EQ(expected, inputs);
}

TEST(ReverseOrderTesT, ReverseOrderVector) {
  Solution solution;
  std::vector<int> inputs = {6,5,4,3,2,1};
  solution.ReverseOrder(inputs);
  std::vector<int> expected = {1,2,3,4,5,6};
  EXPECT_EQ(expected, inputs);
}

TEST(RemoveOddTest, RemoveOddVector) {
  Solution solution;
  std::vector<int> inputs = {2,3,3,4,5,6};
  solution.RemoveOdd(inputs);
  std::vector<int> expected = {2,4,6};
  EXPECT_EQ(expected, inputs);
}

TEST(ConcatenatingTest, ConcatentingVector) {
  Solution solution;
  std::vector<int> inputs = {1,2,2,4};
  std::vector<int> inputs2 = {5,6,7};
  std::vector<int> result = solution.Concatenate(inputs,inputs2);
  std::vector<int> expected = {1,2,2,4,5,6,7};
  EXPECT_EQ(expected, result);
}

TEST(IntersetTest, IntersetVector) {
  Solution solution;
  std::vector<int> inputs {1,2,2,4,5,6,7};
  std::vector<int> inputs2 = {5,6,7};
  std::vector<int> result = solution.Interset(inputs,inputs2);
  std::vector<int> expected = {5,6,7};
  EXPECT_EQ(expected, result);
}