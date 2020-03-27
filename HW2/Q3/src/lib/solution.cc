#include "solution.h"
#include <iostream>
#include <set>
#include <algorithm> 

// print the input vector --> avoid lots of std::cout in main
void Solution::print(std::vector<int> &inputs) {
	for (int i = 0; i < inputs.size(); i++) {
		std::cout << inputs.at(i) << ' ';
	}
}

// Remove duplicate element in input vector
void Solution::RemoveDuplicate(std::vector<int> &inputs) {
  
  int position = 1;
  std::vector<int>::iterator it;

  for (auto n : inputs) {
    for(it = inputs.begin()+position; it < inputs.end(); it++) {
      if(*it==n) {
        inputs.erase(it);
      }
    }
    position++;
  }
  for(auto n : inputs) {
    std::cout << n << " ";
  }

}

// Remove duplicate element in input vector with set method
void Solution::RemoveDuplicateSet(std::vector<int> &inputs) {
  std::set<int> set(inputs.begin(), inputs.end());
  // convert set to vector, in order to let inputs change!
  inputs.assign(set.begin(),set.end());
  for(auto n : inputs) {
    std::cout << n << " ";
  }
}

// Reverse the order of the input vector
void Solution::ReverseOrder(std::vector<int> &inputs) {
  std::reverse(inputs.begin(),inputs.end());
  for(auto n : inputs) {
    std::cout << n << " ";
  }
}

// Remove odd number in input vector
void Solution::RemoveOdd(std::vector<int> &inputs) {
  std::vector<int>::iterator it;
  for(it = inputs.begin(); it < inputs.end(); it++) {
    if( *it % 2 != 0) {
      inputs.erase(it);
      it--;
    }
  }
  for(auto n : inputs) {
    std::cout << n << " ";
  }
}

// Concatenate two input vector
std::vector<int> Solution::Concatenate(std::vector<int> &inputs1, std::vector<int> &inputs2) {
  std::vector<int> result;
  std::vector<int>::iterator it;
  for(it = inputs1.begin(); it < inputs1.end(); it++) {
    result.push_back(*it);
  }
  for(it = inputs2.begin(); it < inputs2.end(); it++) {
    result.push_back(*it);
  }
  return result;
}

// Find the interset element within two input vector
std::vector<int> Solution::Interset(std::vector<int> &inputs1, std::vector<int> &inputs2) {
  std::set <int> temp;

  for (auto n : inputs1) {
    for (auto i : inputs2) {
      if(n==i) {
        temp.insert(n);
      }
    }
  }
  // convert set to vector
  std::vector<int> result (temp.begin(), temp.end());

  return result;

}

