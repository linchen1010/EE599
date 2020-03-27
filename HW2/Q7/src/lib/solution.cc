#include "solution.h"

std::map<char, char> Solution::FindMap(std::string str1, std::string str2) {
  std::map <char, char> empty = {};
  std::map <char, char> result;
  std::string temp1;
  std::string temp2;
  std::vector <char>::iterator ptr1 ;
  std::vector <char>::iterator ptr = str2.begin();
  std::map<char, char>::iterator it;
  for (unsigned i = 0; i < str1.length(); i++) {
      result[str1.at(i)] = *ptr;
      ptr++;
  }

  for(ptr1 = str1.begin();ptr1!=str1.end();ptr1++) {
    temp1 += result[*ptr1];
  }

  if(temp1 == str2) {
    return result;
  }

  else {
    return empty;
  }
  

  
}

