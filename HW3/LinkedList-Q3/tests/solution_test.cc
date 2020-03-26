#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SinglyLinkedListTest, Push_Front_should) {
  SinglyLinkedList myList;
  myList.push_front(1);
  myList.push_front(2);
  myList.push_front(3);
  myList.push_front(4);
  int actual = myList.head_->val;
  int expected = 4;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Push_back_should) {
  SinglyLinkedList myList;
  myList.push_back(1);
  myList.push_back(2);
  myList.push_back(3);
  myList.push_back(4);
  int actual = myList.head_->val;
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Constuctor_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  myList.pop_front();
  int actual = myList.head_->val;
  int expected = 2;
  EXPECT_EQ(expected, actual);
}



TEST(SinglyLinkedListTest, Pop_Front_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  myList.pop_front();
  int actual = myList.head_->val;
  int expected = 2;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, GetBackPointer_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  int actual = myList.GetBackPointer()->val;
  int expected = 5;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Pop_Back_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  myList.pop_back();
  int actual = myList.GetBackPointer()->val;
  int expected = 4;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, GetIthPointer_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  myList.pop_back();
  int actual = myList.GetIthPointer(3)->val;
  int expected = 3;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Front_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  int actual = myList.front();
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Back_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  int actual = myList.back();
  int expected = 5;
  EXPECT_EQ(expected, actual);
}


TEST(SinglyLinkedListTest, Erase_Head_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  myList.erase(myList.head_);
  int actual = myList.front();
  int expected = 2;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Erase_Back_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  myList.erase(myList.GetBackPointer());
  int actual = myList.back();
  int expected = 4;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Erase_other_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  myList.erase(myList.GetIthPointer(2));
  myList.pop_front();
  int actual = myList.front();
  int expected = 3;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Size_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  int actual = myList.size();
  int expected = 5;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Empty_should) {
  SinglyLinkedList EmptyList;
  bool actual = EmptyList.empty();
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Not_Empty_should) {
  SinglyLinkedList List;
  List.push_back(10);
  bool actual = List.empty();
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedListTest, Insert_After_should) {
  std::vector<int> inputs = {1,2,3,4,5};
  SinglyLinkedList myList(inputs,-1);
  myList.insert_after(myList.head_,100);
  myList.pop_front();
  int actual = myList.front();
  int expected = 100;
  EXPECT_EQ(expected, actual);
}


