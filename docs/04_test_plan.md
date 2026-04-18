# Test Plan

## 1. Test Objectives
- Verify correctness of both TwoSumArray and TwoSumHashTable implementations
- Ensure all edge cases are handled properly
- Validate that functions do not use the same element twice
- Confirm build and execution in different environments

## 2. Test Scope
### 2.1 In Scope
- Functional testing of both algorithms
- Edge case testing (negatives, duplicates, zeros)
- Build testing with g++
- CI/CD pipeline testing
- Docker container testing

### 2.2 Out of Scope
- Performance benchmarking
- Memory leak testing
- Input validation testing
- Error handling for invalid inputs

## 3. Test Cases
### 3.1 Functional Test Cases

| Test Case ID | Description | Input | Expected Output | Algorithm |
|-------------|-------------|-------|-----------------|-----------|
| TC001 | Basic valid example | nums=[2,7,11,15], target=9 | [0,1] or [1,0] | Both |
| TC002 | Negative numbers | nums=[-1,-2,-3,-4,-5], target=-8 | [2,4] or [4,2] | Both |
| TC003 | Duplicate values | nums=[3,3], target=6 | [0,1] or [1,0] | Both |
| TC004 | Zero values | nums=[0,4,3,0], target=0 | [0,3] or [3,0] | Both |
| TC005 | Small input | nums=[1,2], target=3 | [0,1] or [1,0] | Both |

## 4. Test Environment
### 4.1 Local Environment
- OS: Windows 10
- Compiler: g++ (MinGW)
- C++ Standard: C++17

### 4.2 CI/CD Environment
- OS: Ubuntu latest
- Compiler: g++ (system package)
- Trigger: Push and Pull Request

### 4.3 Docker Environment
- Base Image: Ubuntu 22.04
- Compiler: g++ (apt package)

## 5. Test Execution
### 5.1 Manual Testing
- Compile: `g++ -std=c++17 -o twosum main.cpp twosum.cpp`
- Execute: `./twosum`
- Verify: Check console output for "All tests passed!"

### 5.2 Automated Testing
- GitHub Actions workflow triggers on push/PR
- Builds project and runs tests
- Reports success/failure status

### 5.3 Docker Testing
- Build image: `docker build -t twosum .`
- Run container: `docker run twosum`
- Verify: Check container output

## 6. Success Criteria
- All test cases pass (assertions do not fail)
- Console output shows "All tests passed!"
- CI/CD pipeline shows green status
- Docker container executes successfully

## 7. Test Deliverables
- Test implementation in main.cpp
- GitHub Actions workflow file
- Dockerfile for containerized testing
- This test plan document