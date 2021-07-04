#include <iostream>
#include <set>
#include <string>
#include <vector>
#include "isogram.h"

namespace isogram {
    bool isDelim(char c) {
        const string delims(" -_");
        for (auto i : delims) {
            if (i == c) return true;
        }
        return false;
    }
    bool is_isogram(const string& s) {
        cout << s << endl;
        vector<char> letters;

        for (char i : s) {
            if (isDelim(i) == false) {
                letters.push_back(tolower(i));
            }
        }

        // create set from non-delimiter letters for comparison
        set<char> char_set(letters.begin(), letters.end());
        return letters.size() == char_set.size();
        /* return 7 == char_set.size(); */
        /* return false; */
    };
}  // namespace isogram
