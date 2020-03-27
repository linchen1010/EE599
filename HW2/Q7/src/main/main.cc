#include <iostream>
#include "src/lib/solution.h"
#include <map>

int main()
{
    Solution solution ;
    std::string inputs = "add";
    std::string inputs2 = "egg";
    std::map <char, char> mymap = solution.FindMap(inputs,inputs2);
    std::map <char, char>::iterator it;

    std::cout << "From = " << inputs << ", to = " << inputs2 << std::endl;
    for(it = mymap.begin();it != mymap.end();it++) {
        std::cout << "(" << it->first << "->" << it->second << ")" << std::endl;
    }


    return EXIT_SUCCESS;
}