#include "leap.h"

namespace leap {
    bool is_leap_year(int y) {
        // yr must be divisible by 4
        if (y % 4 != 0) return false;
        // if divisible by 100, check if divisible by 400
        if (y % 100 == 0 && y % 400 != 0) {
            return false;
        }

        return true;
    };
}  // namespace leap
