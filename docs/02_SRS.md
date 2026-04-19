# Software Requirements Specification (SRS)

## 1. Introduction
### 1.1 Purpose
This document specifies the requirements for a C++ implementation of the Two Sum algorithm, providing two different algorithmic approaches with comprehensive testing and automated build pipeline.

### 1.2 Scope
The system shall implement two functions that solve the Two Sum problem: finding indices of two numbers in an array that add up to a target value.

## 2. Functional Requirements
### 2.1 TwoSumArray Function
- **FR1.1**: Shall accept a std::vector<int> and an int target
- **FR1.2**: Shall return a std::vector<int> containing exactly two indices
- **FR1.3**: Shall use O(n^2) time complexity with nested loops
- **FR1.4**: Shall not use the same element twice

### 2.2 TwoSumHashTable Function
- **FR2.1**: Shall accept a std::vector<int> and an int target
- **FR2.2**: Shall return a std::vector<int> containing exactly two indices
- **FR2.3**: Shall use O(n) time complexity with unordered_map
- **FR2.4**: Shall not use the same element twice

### 2.3 Test Suite
- **FR3.1**: Shall include tests for basic valid examples
- **FR3.2**: Shall include tests for negative numbers
- **FR3.3**: Shall include tests for duplicate values
- **FR3.4**: Shall include tests for zero values
- **FR3.5**: Shall include tests for small input sizes

## 3. Non-Functional Requirements
### 3.1 Performance
- **NFR1.1**: TwoSumHashTable shall run in O(n) time
- **NFR1.2**: TwoSumArray shall run in O(n^2) time

### 3.2 Compatibility
- **NFR2.1**: Shall compile with C++17 standard
- **NFR2.2**: Shall use only STL containers and algorithms

### 3.3 Build Requirements
- **NFR3.1**: Shall build successfully with g++
- **NFR3.2**: Shall run on Ubuntu Linux environment
- **NFR3.3**: Shall build and run in Docker container

## 4. Interface Requirements
### 4.1 Function Signatures
```cpp
std::vector<int> TwoSumArray(const std::vector<int>& nums, int target);
std::vector<int> TwoSumHashTable(const std::vector<int>& nums, int target);
```

### 4.2 Input Constraints
- nums: non-empty vector of integers
- target: integer value
- Exactly one solution exists for each test case

### 4.3 Output Format
- Vector of two integers representing indices
- Order of indices may vary
- Indices are 0-based