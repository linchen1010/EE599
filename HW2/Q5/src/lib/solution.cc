#include "solution.h"
#include <algorithm>

std::string Solution::SwapIndex(std::string str, int index1, int index2) { 
  if(index1 > str.size()||index2 > str.size()) {
    return "Input indices are not correct!!!";
  }
  std::vector<char> temp(str.begin(), str.end());
  std::vector<char>::iterator ptr = temp.begin();
  char tempchar;
  tempchar =  *(ptr+index1);
  *(ptr+index1) = *(ptr+index2);
  *(ptr+index2) = tempchar;

  std::string result(temp.begin(),temp.end());
  
  return result;
}

void Solution::ReverseString(std::string &str) {
  std::reverse(str.begin(),str.end());
}

std::string Solution::ToLower(std::string &str) {
  std::transform(str.begin(), str.end(), str.begin(), ::tolower);
  return str;
}
