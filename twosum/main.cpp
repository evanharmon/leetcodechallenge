#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int> nums, int target) {
    auto prev = 0;
    auto sum = 0;
    auto m = 0;
    for (auto it = nums.begin(); it != nums.end(); ++it, ++m) {
        auto n = 0;
        auto mVal = *it;
        std::cout << "m index " << m << " val " << mVal << " n index " << n << std::endl;
        if (m != 0) {
            for (auto jt = 0; n < m; ++n) {
                auto nVal = nums.at(n);
                std::cout << "inner loop" << " m idx " << m << " m val " << mVal << " n idx " << n << " n val " << nVal << std::endl;
                if (m != n) {
                    auto totes = mVal + nVal;
                    std::cout << "totes " << totes << std::endl;
                    if (totes == target) {
                        return {m,n};
                    }
                }
            }
        }
    }

    return {0,0};
}

int main() {
    // nums = [2,7,11,15], target = 9
    /* std::vector<int> nums = {3,2,3}; */
    /* std::vector<int> nums = {3,2,4}; */
    std::vector<int> nums = {2,7,11,15};
    for (auto num : nums) {
        std::cout << " num " << num << std::endl;
    }

    /* auto target = 6; */
    /* auto target = 6; */
    auto target = 9;
    std::cout << " target " << target << std::endl;

    auto result = twoSum(nums, target);
    for (auto r : result) {
        std::cout << "vector " << r << std::endl;
    }

    return 0;
}
