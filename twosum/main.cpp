#include <iostream>
#include <vector>

// COMMENTS
//
// 1. iterate through vector of int values, incrementing vector index value
//   a. 1. skip first vector int value as two ints are required for checking sum in this challenge
//   a. 2. inner loop to compare current int value to previous int values in vector
//   a. 2. a. return early if sum equals target sum
std::vector<int> twoSum(std::vector<int> nums, int target) {
    // bleh, o(N^2) ?
    for (auto m = 1; m != nums.size(); ++m) {
        auto n = 0;
        for (auto jt = 0; n < m; ++n) {
            if ((nums[m] + nums.at(n)) == target) return {n,m};
        }
    }

    return {0,0};
}

int main() {
    // VARIOUS TEST CASES
    //
    // nums = [2,7,11,15], target = 9

    /* std::vector<int> nums = {3,2,3}; */
    /* std::cout << "result should be [0,2]" << std::endl; */
    /* auto target = 6; */

    /* std::vector<int> nums = {3,2,4}; */
    /* std::cout << "result should be [1,2]" << std::endl; */
    /* auto target = 6; */

    std::vector<int> nums = {2,7,11,15};
    std::cout << "result should be [0,1]" << std::endl;
    auto target = 9;

    // challenge function
    // similar to othet leetCode challenges, the actual function signature makes testing difficult
    auto result = twoSum(nums, target);
    for (auto r : result) {
        std::cout << "vector " << r << std::endl;
    }

    return 0;
}
