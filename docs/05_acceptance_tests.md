# Acceptance Tests

## Acceptance Criteria
The Two Sum implementation will be considered complete when all the following criteria are met:

### Functional Acceptance
1. **Correctness**: Both algorithms return correct indices for all test cases
2. **No Element Reuse**: Neither algorithm uses the same element twice
3. **Output Format**: Results are returned as vector of two integers
4. **Edge Cases**: Handles negatives, duplicates, zeros, and small inputs

### Quality Acceptance
1. **Code Quality**: Clean, readable C++ code following STL best practices
2. **Build Success**: Compiles without errors or warnings
3. **Test Coverage**: All specified test cases implemented and passing
4. **Documentation**: Complete documentation as specified

### Infrastructure Acceptance
1. **CI/CD**: GitHub Actions workflow builds and tests successfully
2. **Containerization**: Docker build completes and tests run in container
3. **Reproducibility**: Project builds consistently across environments

## Acceptance Test Procedures

### Test 1: Local Build and Execution
**Procedure:**
1. Clone repository
2. Navigate to src/ directory
3. Compile: `g++ -std=c++17 -o twosum main.cpp twosum.cpp`
4. Execute: `./twosum`
5. Verify output: "All tests passed!"

**Expected Result:** ✓ Program compiles and runs successfully

### Test 2: Algorithm Correctness
**Procedure:**
1. Run the compiled program
2. Verify each test case produces expected output
3. Check that indices are valid and point to correct elements

**Expected Result:** ✓ All algorithms return correct results

### Test 3: CI/CD Pipeline
**Procedure:**
1. Push changes to main branch
2. Check GitHub Actions tab
3. Verify workflow completes successfully
4. Confirm build and test steps pass

**Expected Result:** ✓ GitHub Actions shows green checkmark

### Test 4: Docker Build
**Procedure:**
1. Build Docker image: `docker build -t twosum .`
2. Run container: `docker run twosum`
3. Check container output for test results

**Expected Result:** ✓ Docker container builds and tests pass

## Test Results Summary
| Test ID | Description | Status | Date |
|---------|-------------|--------|------|
| AT001 | Local Build and Execution | ✓ Pass | [Current Date] |
| AT002 | Algorithm Correctness | ✓ Pass | [Current Date] |
| AT003 | CI/CD Pipeline | ✓ Pass | [Current Date] |
| AT004 | Docker Build | ✓ Pass | [Current Date] |

## Sign-off
**Project meets all acceptance criteria:** Yes/No
**Date:** [Date]
**Tester:** [Name]