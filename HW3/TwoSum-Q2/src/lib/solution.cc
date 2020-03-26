#include "solution.h"

  std::vector<int> Solution::TwoSum(std::vector<int> &inputs, int sum) {
    std::map<int,int> map;
    std::map<int, int>::iterator it;
    std::vector<int> result;
    int n = 0;
    for(n = 0; n < inputs.size(); n++) {
      map[inputs[n]] = n;
    }
    
    for(n = 0; n < inputs.size(); n++) {
      int target = sum - inputs[n];
      if(map.count(target) && (std::find(result.begin(), result.end(), n) != result.end()) != 1) {
        result.push_back(n);
        result.push_back(map[target]);
      }
    }

    return result;

  }


