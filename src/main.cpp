#include <iostream>
#include <vector>
#include <cassert>
#include "twosum.h"

using namespace std;

void testTwoSumArray() {
    // Basic valid example
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = TwoSumArray(nums1, target1);
    assert((result1 == vector<int>{0, 1} || result1 == vector<int>{1, 0}));

    // Negative numbers
    vector<int> nums2 = {-1, -2, -3, -4, -5};
    int target2 = -8;
    vector<int> result2 = TwoSumArray(nums2, target2);
    assert((result2 == vector<int>{2, 4} || result2 == vector<int>{4, 2}));

    // Duplicate values
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = TwoSumArray(nums3, target3);
    assert((result3 == vector<int>{0, 1} || result3 == vector<int>{1, 0}));

    // Zero as part of the solution
    vector<int> nums4 = {0, 4, 3, 0};
    int target4 = 0;
    vector<int> result4 = TwoSumArray(nums4, target4);
    assert((result4 == vector<int>{0, 3} || result4 == vector<int>{3, 0}));

    // Small input sizes
    vector<int> nums5 = {1, 2};
    int target5 = 3;
    vector<int> result5 = TwoSumArray(nums5, target5);
    assert((result5 == vector<int>{0, 1} || result5 == vector<int>{1, 0}));

    cout << "TwoSumArray tests passed!" << endl;
}

void testTwoSumHashTable() {
    // Basic valid example
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = TwoSumHashTable(nums1, target1);
    assert((result1 == vector<int>{0, 1} || result1 == vector<int>{1, 0}));

    // Negative numbers
    vector<int> nums2 = {-1, -2, -3, -4, -5};
    int target2 = -8;
    vector<int> result2 = TwoSumHashTable(nums2, target2);
    assert((result2 == vector<int>{2, 4} || result2 == vector<int>{4, 2}));

    // Duplicate values
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = TwoSumHashTable(nums3, target3);
    assert((result3 == vector<int>{0, 1} || result3 == vector<int>{1, 0}));

    // Zero as part of the solution
    vector<int> nums4 = {0, 4, 3, 0};
    int target4 = 0;
    vector<int> result4 = TwoSumHashTable(nums4, target4);
    assert((result4 == vector<int>{0, 3} || result4 == vector<int>{3, 0}));

    // Small input sizes
    vector<int> nums5 = {1, 2};
    int target5 = 3;
    vector<int> result5 = TwoSumHashTable(nums5, target5);
    assert((result5 == vector<int>{0, 1} || result5 == vector<int>{1, 0}));

    cout << "TwoSumHashTable tests passed!" << endl;
}

int main() {
    testTwoSumArray();
    testTwoSumHashTable();
    cout << "All tests passed!" << endl;
    return 0;
}