# two sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1] because nums[0] + nums[1] = 2 + 7 = 9.

## Requirements
- ​Use **`std::vector<int>`** for the input array and result storage.

- ​Provide two solution implementations:
     - **`TwoSumArray`**: a direct array-based approach.
     - **`TwoSumHashTable`**: a hash-table-based approach using the STL.

- ​Each implementation should:
     - accept an integer array and a target value,
     - return the indices of the two matching elements,
     - avoid using the same element twice.

- ​Include test cases for:
     - a basic valid example,
     - negative numbers,
     - duplicate values,
     - zero as part of the solution,
     - small input sizes.

- ​Add **GitHub Actions** to automatically:
     - build the project,
     - run all test cases,
     - trigger on `push` and `pull_request`.

- ​Add **Docker** support to:
     - build the C++ project in a reproducible environment,
     - run the test suite inside a container.
     
## Repository Structure

```
.
├─ docs/
│  ├─ 00_intended_use.md
│  ├─ 01_plan.md
│  ├─ 02_SRS.md
│  ├─ 03_SDS.md
│  ├─ 04_test_plan.md
│  ├─ 05_acceptance_tests.md
│  ├─ 06_traceability.md
│  ├─ 07_deploy.md
│  └─ 08_known_issues.md
├─ src/
├─ include/
├─ tests/
├─ .github/workflows/ci.yml
├─ README.md
├─ CHANGELOG.md
├─ AI_POLICY.md
└─ AI_USAGE.md
```
