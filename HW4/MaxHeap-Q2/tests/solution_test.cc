#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MaxHeapShould, HeapPushTest) {
  MaxHeap heap;
  heap.push(1);
  heap.push(2);
  heap.push(3);
  std::vector <int> actual = heap.data_;
  std::vector <int> expected = {3,1,2};
  EXPECT_EQ(expected, actual);
}

TEST(MaxHeapShould, HeapPushTest2) {
  MaxHeap heap;
  heap.push(1);
  heap.push(2);
  heap.push(3);
  heap.push(4);
  heap.push(5);
  std::vector <int> actual = heap.data_;
  std::vector <int> expected = {5,4,2,1,3};
  EXPECT_EQ(expected, actual);
}

TEST(MaxHeapShould, GetParentIndexTest) {
  MaxHeap heap;
  heap.push(1);
  heap.push(2);
  heap.push(3);
  int actual = heap.GetParentIndex(2);
  int expected = 0;
  EXPECT_EQ(expected, actual);
}

TEST(MaxHeapShould, GetLeftIndexTest) {
  MaxHeap heap;
  heap.push(1);
  heap.push(2);
  heap.push(3);
  int actual = heap.GetLeftIndex(0);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(MaxHeapShould, GetRightIndexTest) {
  MaxHeap heap;
  heap.push(1);
  heap.push(2);
  heap.push(3);
  int actual = heap.GetRightIndex(0);
  int expected = 2;
  EXPECT_EQ(expected, actual);
}

TEST(MaxHeapShould, ReturnTopTest) {
  MaxHeap heap;
  heap.push(1);
  heap.push(2);
  heap.push(3);
  heap.push(7);
  int actual = heap.top();
  int expected = 7;
  EXPECT_EQ(expected, actual);
}

// use top() functuon to see if the max element has been pop or not
TEST(MaxHeapShould, HeapPopTest) {
  MaxHeap heap;
  heap.push(4);
  heap.push(5);
  heap.push(6);
  heap.push(7);
  heap.push(10);
  heap.push(9);
  heap.pop();
  int actual = heap.top();
  int expected = 9;
  EXPECT_EQ(expected, actual);
}

