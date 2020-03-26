#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <iostream>

class AcademicRecord {
public:
  int Maths;
  int Computers;
  int Physics;
  AcademicRecord() : Maths(0), Computers(0), Physics(0) {};
  AcademicRecord(int m, int c, int p);
  AcademicRecord& operator=(const AcademicRecord &student) {
    Maths = student.Maths;
    Computers = student.Computers;
    Physics = student.Physics;
    return *this;
  }
  void operator++(); // prefix
  void operator++(int); // postfix
  void operator--();
  void operator--(int);
  void operator+=(int i);
  void operator-=(int i);
  bool operator==(const AcademicRecord &s1) ;
  std::string print();
  // to sure that score is not out of boundary(< 0 or > 100)
  void boundary(int math, int computer, int physic);
  void printScore();
  

private:
};

#endif