#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>



// Q4 test
TEST(TopoTest, ReturnTopoArray) {
  std::map<int, std::set<int>> vertices { // test case 1
    {7, {5, 6}},
    {6, {3, 4}},
    {5, {2, 4}},
    {4, {}},
    {3, {1}},
    {2, {1}},
    {1, {0}},
    {0, {8,9}},
    {8, {}},
    {9, {}}
  };

  Graph g(vertices);
  std::vector<int> expected = {7,5,6,2,3,4,1,0,8,9};
  std::vector<int> actual = g.topologicalSort();
  EXPECT_EQ(expected, actual);
}

TEST(TopoTest, ReturnTopoArray2) { // test case 2
  std::map<int, std::set<int>> vertices {
    {7, {5, 6}},
    {6, {3, 4}},
    {5, {2, 4}},
    {4, {}},
    {3, {1}},
    {2, {1}},
    {1, {0}},
    {0, {}},
    {8, {7}},
    {9, {8}}
  };

  Graph g(vertices);
  std::vector<int> expected = {9,8,7,5,6,2,3,4,1,0};
  std::vector<int> actual = g.topologicalSort();
  EXPECT_EQ(expected, actual);
}

// Q5 test
TEST(ShortPathTest, ReturnShortPath) {
  std::map<int, std::set<int>> vertices {
    {0, {4, 5, 1}},
    {5, {6, 0}},
    {6, {5 ,7, 8}},
    {7, {6, 8}},
    {8, {6, 7, 2}},
    {1, {0, 2, 3}},
    {2, {1, 3, 8}},
    {3, {1, 2}},
    {4, {0}},
  };
  Graph g(vertices);
  std::vector<bool> expected = {1,1,1,0,0,1,1,0,1};
  std::vector<bool> actual = g.shortPath(g);
  EXPECT_EQ(expected, actual);
}