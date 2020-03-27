#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

// Q3 TEST
TEST(DFS_PATH_TEST, DFS_PATH1) {
  std::map<int, std::set<int>> vertices {
    {0, {1, 2, 5}},
    {1, {0, 2, 3}},
    {2, {0, 1, 3}},
    {3, {1, 2, 4, 6}},
    {4, {3}},
    {5, {0}},
    {6, {3,7}},
    {7, {6}}
  };
  Graph g(vertices);
  g.NonRecursiveDFS(0);
  std::vector<int> actual = g.DFS_Path_Test;
  std::vector<int> expected = {0,1,2,3,4,6,7,5};
  EXPECT_EQ(expected, actual);
}

TEST(DFS_PATH_TEST, DFS_PATH2) {
  std::map<int, std::set<int>> vertices {
    {0, {1, 2, 5}},
    {1, {0, 2, 3}},
    {2, {0, 1, 3}},
    {3, {1, 2, 4, 6}},
    {4, {3}},
    {5, {0,10}},
    {6, {3,7}},
    {7, {6}},
    {10,{5}}
  };
  Graph g(vertices);
  g.NonRecursiveDFS(0);
  std::vector<int> actual = g.DFS_Path_Test;
  std::vector<int> expected = {0,1,2,3,4,6,7,5,10};
  EXPECT_EQ(expected, actual);
}

// Q4 TEST
TEST(DFS_ALL_TEST, DFS_PATH1) {
  std::map<int, std::set<int>> vertices {
    {0, {1, 2, 5}},
    {1, {0, 2, 3}},
    {2, {0, 1, 3}},
    {3, {1, 2, 4, 6}},
    {4, {3}},
    {5, {0}},
    {6, {3,7}},
    {7, {6}}
  };
  Graph g(vertices);
  std::vector<int> actual = g.DFS_ALL();
  std::vector<int> expected = {0,1,2,3,4,6,7,5};
  EXPECT_EQ(expected, actual);
}

TEST(DFS_ALL_TEST, DFS_PATH2) {
  std::map<int, std::set<int>> vertices {
    {0, {1, 2, 5}},
    {1, {0, 2, 3}},
    {2, {0, 1, 3}},
    {3, {1, 2, 4, 6}},
    {4, {3}},
    {5, {0,10}},
    {6, {3,7}},
    {7, {6}},
    {10,{5}}
  };
  Graph g(vertices);
  std::vector<int> actual = g.DFS_ALL();
  std::vector<int> expected = {0,1,2,3,4,6,7,5,10};
  EXPECT_EQ(expected, actual);
}

TEST(DFS_ALL_TEST, DFS_PATH3_WithUnconnectedPoint) {
  std::map<int, std::set<int>> vertices {
    {0, {1, 2, 5}},
    {1, {0, 2, 3}},
    {2, {0, 1, 3}},
    {3, {1, 2, 4, 6}},
    {4, {3}},
    {5, {0,10}},
    {6, {3,7}},
    {7, {6}},
    {10,{5}},
    {11, {}}
  };
  Graph g(vertices);
  std::vector<int> actual = g.DFS_ALL();
  std::vector<int> expected = {0,1,2,3,4,6,7,5,10};
  EXPECT_EQ(expected, actual);
}

// Q5 TEST
TEST(Maze_TEST, Maze_input1_True) {
  Solution s;
  std::vector<std::vector<int>> maze = {{1,1,0,0,0}, // true case
                                        {1,0,1,1,1},
                                        {1,1,0,0,1},
                                        {1,1,0,0,1},
                                        {1,1,1,1,1}};
  std::pair<int, int> start = {0,4};
  std::pair<int, int> end (2,4);                                      
  bool actual = s.FindPath(maze,start,end);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(Maze_TEST, Maze_input2_False) {
  Solution s;
  std::vector<std::vector<int>> maze = {{1,1,0,0,0}, // false case
                                        {1,0,1,1,1},
                                        {1,1,0,0,0},
                                        {1,1,0,0,1},
                                        {1,0,1,1,1}};
  std::pair<int, int> start = {4,4};
  std::pair<int, int> end (0,2);                                      
  bool actual = s.FindPath(maze,start,end);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(Partition_TEST, Partition_input_CheckWithVector) {
  Solution s;
  std::vector<int> v = {9,8,7,6,5,4,3,2,1};
  std::vector<int> test = v;
  int i = 8;
  s.Partition(v,i);

  std::vector<int> expected = {1,8,7,6,5,4,3,2,9};
  std::vector<int> actual = v;

  EXPECT_EQ(expected, actual);
}

TEST(Partition_TEST, Partition_input_CheckFlag) {
  Solution s;
  std::vector<int> v = {9,8,7,6,5,4,3,2,1};
  std::vector<int> test = v;
  int i = 4;
  s.Partition(v,i);
  bool LeftFlag = true;
  bool RightFlag = true;
  bool TestFlag = false;
  // test if elements on the left of the pivot all less than pivot
  for(int n = 0; n < i; n++) {
    if(v[n] < test[i]) {
      LeftFlag = true;
    } else LeftFlag = false;
  } 
  // test if elements on the right of the pivot all greater than pivot
  for(int n = i+1; n < v.size(); n++) {
    if(v[n] > test[i]) {
      RightFlag = true;
    } else RightFlag = false;
  } 
  // if partition work, testflag should be true
  if(LeftFlag && RightFlag) {
    TestFlag = true;
  }

  bool expected = TestFlag;
  bool actual = true;

  EXPECT_EQ(expected, actual);
}