#include "solution.h"
#include <iostream>
double Solution::FindMedian(std::vector<double> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  else if (inputs.size() % 2  != 0) { // odd numbers
    return  inputs[inputs.size()/2]; 
  }
  else if(inputs.size() % 2 == 0) { // even numbers
    double result = INT32_MIN;
    result = ( inputs[inputs.size()/2 - 1] + inputs[inputs.size()/2] ) / 2  ;
    return result ;
  }
}

std::string Solution::DoubleSwap(std::string &str, char c1, char c2) {
	for(auto it = str.begin(); it != str.end(); it++) {
		if(*it==c2) {
			*it = c1;   
    }
    else if(*it == c1) {
	    *it = c2;
    }
 	}

	return str;
	
} 
