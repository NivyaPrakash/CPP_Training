#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            if (num_map.find(complement) != num_map.end()) {
                return { num_map[complement], i };
            }

            num_map[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    std::vector<int> result = solution.twoSum(nums, target);
    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}
