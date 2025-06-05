#include <iostream>
#include <vector>
#include <algorithm>
int kthLargest(const std::vector<int>& nums, int k) {
    std::vector<int> sorted = nums;
    std::sort(sorted.begin(), sorted.end());
    return sorted[sorted.size() - k];
}

int main() {
    std::vector<int> nums = { 5, 20, 15, 30, 25 };
    int k = 3;

    int result = kthLargest(nums, k);
    std::cout << result << std::endl; 

    return 0;
}
