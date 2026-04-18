#include <vector>
#include <unordered_map>

using namespace std;

// Array-based approach: O(n^2) time complexity
vector<int> TwoSumArray(const vector<int>& nums, int target) {
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return {static_cast<int>(i), static_cast<int>(j)};
            }
        }
    }
    return {}; // No solution found, though problem assumes one exists
}

// Hash table-based approach: O(n) time complexity
vector<int> TwoSumHashTable(const vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (size_t i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return {map[complement], static_cast<int>(i)};
        }
        map[nums[i]] = i;
    }
    return {}; // No solution found
}