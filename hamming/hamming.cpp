#include "hamming.h"
#include <stdexcept>

namespace hamming {
    int compute(std::string a, std::string b) {
        // return error if strands are not of equal length
        if (a.size() != b.size()) throw std::domain_error("dna strands not of equal length");
        // track index for elements of strand being compared
        int sum_diff = 0;
        // compare strands and increment on differences
        for (std::string::size_type i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) ++sum_diff;
        }

        return sum_diff;
    }
}  // namespace hamming
