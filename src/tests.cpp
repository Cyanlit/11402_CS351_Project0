#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include "twosum.h"

// Helper to check if the returned indices actually sum to the target
bool verify(const std::vector<int>& nums, int target, const std::vector<int>& indices) {
    if (indices.size() != 2) return false;
    return (nums[indices[0]] + nums[indices[1]] == target) && (indices[0] != indices[1]);
}

void run_automated_tests() {
    struct TestCase {
        std::vector<int> nums;
        int target;
        std::string name;
    };

    // Test cases derived from your Test Plan (TC001-TC005)
    std::vector<TestCase> cases = {
        {{2, 7, 11, 15}, 9, "Basic Case"},
        {{-1, -2, -3, -4, -5}, -8, "Negative Numbers"},
        {{3, 3}, 6, "Duplicate Values"},
        {{0, 4, 3, 0}, 0, "Zero Values"},
        {{1, 2}, 3, "Small Input"}
    };

    for (const auto& tc : cases) {
        std::cout << "Running: " << tc.name << "... ";
        
        // Test O(n^2) Approach
        auto resArray = TwoSumArray(tc.nums, tc.target);
        assert(verify(tc.nums, tc.target, resArray));

        // Test O(n) Approach
        auto resHash = TwoSumHashTable(tc.nums, tc.target);
        assert(verify(tc.nums, tc.target, resHash));

        std::cout << "Passed!" << std::endl;
    }
}

int main() {
    std::cout << "Starting Automated Test Suite..." << std::endl;
    run_automated_tests();
    std::cout << "\nAll tests passed successfully!" << std::endl;
    return 0;
}