#include "solution.h"

void Solution::Swap(int &x, int &y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
}

void Solution::Swap2(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;    
}


