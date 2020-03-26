#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  AcademicRecord obj1, obj2;
  obj1.Maths = 5;
  obj1.Computers = 10;
  obj1.Physics = 95;

  std::cout << "Value before incrementation::" << std::endl;
  obj1.printScore();
  obj1++;
  std::cout << "Value after incrementation::" << std::endl;
  obj1.printScore();
  obj1--;
  std::cout << "Value after decrementation::" << std::endl;
  obj1.printScore();

  obj2=obj1;

  std::cout << "Value of Object 2::" << std::endl;
  obj2.printScore();

  std::cout << "Value of Object2 after increasing marks by 50 for each subject::" << std::endl;
  obj2+=50;
  obj2.printScore();

  std::cout << "Value of Object2 after decreasing marks by 30 for each subject::" << std::endl;
  obj2-=30;
  obj2.printScore();

  

  return 0;
}