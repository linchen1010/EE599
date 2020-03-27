#include "solution.h"


std::string Solution::FindPalindrome(std::string str) { 

  std::vector <char>::iterator ptr = str.begin();
  std::vector <char>::iterator ptrend = str.end()-1;
  if(str.size()<3) {
    if(*str.begin()!=*(str.end()-1)) {
      return "False";
    }
    else {
      return "True";
    }
  }
  else if(str.size() > 2) {
    for(ptr = str.begin(); ptr < str.begin()+ ((str.size()-1)/2); ptr++) {
      if (*ptr!=*ptrend) {
        return "False";
      }
      ptrend--;
    }
  }
    return "True";
}

std::string Solution::ApproximatePalindrome(std::string &str) {
  std::vector <char>::iterator space;

  for(space = str.begin(); space < str.end(); space++) { // do not erase multiple time, construct a new one!
    if(!((*space >= 'a' && *space <='z') || (*space >= 'A' && *space<='Z'))) {
      str.erase(space);
      space--;
    }
  }
  std::transform(str.begin(), str.end(), str.begin(), ::tolower);

  std::vector <char>::iterator ptr = str.begin();
  std::vector <char>::iterator ptrend = str.end()-1;
  if(str.size()<3) {
    if(*str.begin()!=*(str.end()-1)) {
      return "False";
    }
    else {
      return "True";
    }
  }
  else if(str.size() > 2) {
    for(ptr = str.begin(); ptr < str.begin()+ ((str.size()-1)/2); ptr++) {
      if (*ptr!=*ptrend) {
        return "False";
      }
      ptrend--;
    }
  }
    return "True";
}


