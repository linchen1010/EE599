#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Operator, Operator_Plus_Boundary_Postfix) {
  AcademicRecord student1(95,95,95);
  AcademicRecord student2(100,100,100);
  student1++;
  std::string actual = student1.print();
  std::string expected = student2.print();
  EXPECT_EQ(expected, actual);
}

TEST(Operator, OperatorPretfix) {
  AcademicRecord student1(10,20,30);
  AcademicRecord student2(20,30,40);
  ++student1;
  std::string actual = student1.print();
  std::string expected = student2.print();
  EXPECT_EQ(expected, actual);
}

TEST(Operator, Operator_Minus_Boundary_Postfix) {
  AcademicRecord student1(5,5,5);
  AcademicRecord student2(0,0,0);
  student1--;
  std::string actual = student1.print();
  std::string expected = student2.print();
  EXPECT_EQ(expected, actual);
}

TEST(Operator, Operator_PlusEqual_Postfix) {
  AcademicRecord student1(5,5,5);
  AcademicRecord student2(50,50,50);
  student1+=45;
  std::string actual = student1.print();
  std::string expected = student2.print();
  EXPECT_EQ(expected, actual);
}

TEST(Operator, Operator_MinusEqual_Postfix) {
  AcademicRecord student1(5,5,5);
  AcademicRecord student2(0,0,0);
  student1-=10;
  std::string actual = student1.print();
  std::string expected = student2.print();
  EXPECT_EQ(expected, actual);
}

TEST(Operator, Operator_Object_Test) {
  AcademicRecord obj1(20,30,40);
  AcademicRecord obj2=obj1;
  std::string actual = obj1.print();
  std::string expected = obj2.print();
  EXPECT_EQ(expected, actual);
}

TEST(Operator, Operator_Object_EqualComparison_Test) {
  AcademicRecord obj1(20,30,40);
  AcademicRecord obj2=obj1;
  bool actual = (obj1==obj2);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}




