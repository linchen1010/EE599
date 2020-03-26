#include "solution.h"

AcademicRecord::AcademicRecord(int m, int c, int p) {
    Maths = m;
    Computers = c;
    Physics = p;
    boundary(m,c,p);
  }


  void AcademicRecord::operator++() {
    Maths += 10;
    Computers += 10;
    Physics += 10;
    boundary(Maths,Computers,Physics);
  }

  void AcademicRecord::operator++(int) {
    Maths += 10;
    Computers += 10;
    Physics += 10;
    boundary(Maths,Computers,Physics);
  }

  void AcademicRecord::operator--() {
    Maths -= 10;
    Computers -= 10;
    Physics -= 10;
    boundary(Maths,Computers,Physics);
  }

  void AcademicRecord::operator--(int) {
    Maths -= 10;
    Computers -= 10;
    Physics -= 10;
    boundary(Maths,Computers,Physics);
  }

  void AcademicRecord::operator+=(int i) {
    Maths += i;
    Computers += i;
    Physics += i;
    boundary(Maths, Computers, Physics);
  }

  void AcademicRecord::operator-=(int i) {
    Maths -= i;
    Computers -= i;
    Physics -= i;
    boundary(Maths, Computers, Physics);
  }

  bool AcademicRecord::operator==(const AcademicRecord &s1) {
    if (this->Maths == s1.Maths && 
        this->Computers == s1.Computers && 
        this->Physics == s1.Physics) 
    {
      return 1;
    }
    else
      return 0;
  }

  std::string AcademicRecord::print() {
    std::string result;
    result.push_back(Maths);
    result.push_back(Computers);
    result.push_back(Physics);
    return result;
  }

  void AcademicRecord::printScore() {
    std::cout << "Maths::" << this->Maths << std::endl;
    std::cout << "Computers::" << this->Computers << std::endl;
    std::cout << "Physics::" << this->Physics << std::endl;
  }

  void AcademicRecord::boundary(int math, int computer, int physic) {
    if(math > 100)  {
      Maths = 100;
    }
    else if(math < 0){
      Maths = 0;
    }  
    if(computer > 100) {
      Computers = 100;
    }
    else if(computer < 0) {
      Computers = 0;
    } 
    if(physic > 100) {
      Physics = 100;
    }
    else if(physic < 0) {
      Physics = 0 ;
    }
  }