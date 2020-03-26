#include "solution.h"
#include <iostream>

int Solution::Factorial(int n) {
  if (n == 0) {
    return 1;
  }

  else if (n < 0) {
    return -1;
  }
  else {
    int result = 1;
    for(; n > 0 ;n--) {
      result = result*n;
    }

    return result;
  }
}
int Solution::FactorialRecursive(int n) {
  int result=1;
  result *= n;
  if(n == 0) {
    return 1;
  }
  else if (n < 0) {
    return -1;
  }
  else {
    return result * FactorialRecursive(n - 1);
  }
}

