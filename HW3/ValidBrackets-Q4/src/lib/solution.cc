#include "solution.h"

  bool Solution::ValidBrackets(std::string str) {
    std::stack <int> s;
    for(auto ptr = str.begin(); ptr!=str.end(); ptr++) {
      if( *ptr == '{' || *ptr == '[' || *ptr == '(') {
        s.push(*ptr);
      }
      if(!s.empty()) {
        if( (*ptr == '}' && s.top() == '{') ||
            (*ptr == ']' && s.top() == '[') ||
            (*ptr == ')' && s.top() == '(')  ) {
        
        s.pop();
      }
      }
    }
    if(s.empty()) {
      return true ;
    }
    else {
      return false ;
    }

    
  }


