#include <iostream>
#include <set>
#include <string>
#include <vector>
#include "isogram.h"

namespace isogram {
    // isDelim iterates through delimiters and checks for character match
    bool isDelim(char c) {
        const string delims(" -_");
        for (auto i : delims) {
            if (i == c) return true;
        }
        return false;
    }
    bool is_isogram(const string& s) {
        vector<char> letters;

        // iterate through string and store non-delimiter lowercase chars in vector
        for (char i : s) {
            if (isDelim(i) == false) {
                letters.push_back(tolower(i));
            }
        }

        // create unique set from non-delimiter letters for comparison
        set<char> char_set(letters.begin(), letters.end());
        // if non-delimited vector char size is different than set, then a letter is repeated in the string
        return letters.size() == char_set.size();
    };
}  // namespace isogram
