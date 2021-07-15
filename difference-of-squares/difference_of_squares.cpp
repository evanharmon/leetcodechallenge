#include "difference_of_squares.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

namespace difference_of_squares {
    int square_of_sum(int lastNumber) {
        // create vector of natural numbers
        vector<int> v(lastNumber);
        generate(v.begin(), v.end(), [n=1]()mutable{return n++;});

        // sum numbers
        auto sum_of_numbers = accumulate(v.begin(), v.end(), 0);

        // square sum
        auto sq_sum = pow(sum_of_numbers, 2);
        int result = (int)round(sq_sum);

        return result;
    };
    int sum_of_squares(int lastNumber) {
        vector<int> v(lastNumber);
        // build vector
        // square each element
        generate(v.begin(), v.end(), [n=1]()mutable{
                auto inc = n++;
                return inc * inc;
                });


        // sum all elements
        auto sum = accumulate(v.begin(), v.end(), 0);
        int result = (int)round(sum);

        return result;
    };
    int difference(int lastNumber) {
        auto a = square_of_sum(lastNumber);
        auto b = sum_of_squares(lastNumber);
        auto result = a - b;

        return result;
    };
}  // namespace difference_of_squares
