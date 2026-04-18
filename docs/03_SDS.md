# Software Design Specification (SDS)

## 1. System Architecture
The system consists of three main components:
- `twosum.h`: Header file with function declarations
- `twosum.cpp`: Implementation of the two algorithms
- `main.cpp`: Test suite and main function

## 2. Component Design
### 2.1 TwoSumArray Implementation
**Algorithm**: Brute force approach using nested loops
- Outer loop iterates through each element
- Inner loop checks remaining elements for complement
- Returns indices when sum equals target

**Time Complexity**: O(n^2)
**Space Complexity**: O(1)

### 2.2 TwoSumHashTable Implementation
**Algorithm**: Hash table lookup approach
- Iterate through array once
- For each element, calculate complement (target - current)
- Check if complement exists in hash table
- If found, return indices; else store current element

**Time Complexity**: O(n)
**Space Complexity**: O(n)

## 3. Data Structures
- **Input**: std::vector<int> nums, int target
- **Output**: std::vector<int> containing two indices
- **Internal**: std::unordered_map<int, int> for hash table approach

## 4. Error Handling
- Assumes exactly one solution exists (as per problem statement)
- Returns empty vector if no solution found (though shouldn't occur)
- No input validation implemented (out of scope)

## 5. Testing Design
### 5.1 Test Cases
1. Basic case: [2,7,11,15], target=9 → [0,1]
2. Negative numbers: [-1,-2,-3,-4,-5], target=-8 → [2,4]
3. Duplicates: [3,3], target=6 → [0,1]
4. Zeros: [0,4,3,0], target=0 → [0,3]
5. Small array: [1,2], target=3 → [0,1]

### 5.2 Test Implementation
- Separate test functions for each algorithm
- Uses assert statements for validation
- Outputs success messages to console

## 6. Build System
### 6.1 Local Build
- Command: `g++ -std=c++17 -o twosum main.cpp twosum.cpp`
- Dependencies: g++ compiler with C++17 support

### 6.2 CI/CD Build
- GitHub Actions workflow
- Ubuntu environment
- Automated build and test execution

### 6.3 Docker Build
- Base image: Ubuntu 22.04
- Installs g++ in container
- Copies source files and builds
- Runs tests in containerized environment