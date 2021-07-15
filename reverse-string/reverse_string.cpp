#include "reverse_string.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// Comments
// loop thru string of chars to build vector of chars o(n)
// use container iterator to reverse through chars to build string o(n)
namespace reverse_string {
    std::string reverse_string(std::string str) {
        std::vector<char> val;
        // build vector for iterator
        for (std::string::size_type i = 0; i < str.size(); i++) {
            val.push_back(str[i]);
        }
        // reverse string via vector reverse iterator
        auto result = std::string{val.rbegin(), val.rend()};
        return result;
    }
}  // namespace reverse_string
