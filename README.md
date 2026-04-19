# Two Sum Algorithm Implementation

## Problem Description

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

### Assumptions
- Each input has exactly one solution
- You may not use the same element twice
- Return the answer in any order

### Example
```
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: Because nums[0] + nums[1] == 2 + 7 == 9
```

## Requirements

### Core Implementation
- **Data Structures**: Use `std::vector<int>` for input array and result storage
- **Algorithms**: Provide two solution implementations:
  - `TwoSumArray`: Direct array-based approach (O(n²) time complexity)
  - `TwoSumHashTable`: Hash-table-based approach using STL (O(n) time complexity)

### Function Specifications
Each implementation must:
- Accept an integer array (`std::vector<int>`) and a target value (`int`)
- Return the indices of the two matching elements as `std::vector<int>`
- Avoid using the same element twice

### Testing Requirements
Include comprehensive test cases covering:
- Basic valid example
- Negative numbers
- Duplicate values
- Zero as part of the solution
- Small input sizes

### CI/CD Requirements
- **GitHub Actions**: Automatically build the project and run all test cases
- **Triggers**: On `push` and `pull_request` events

### Containerization
- **Docker Support**: Build the C++ project in a reproducible environment
- **Testing**: Run the test suite inside a container

## Repository Structure

```
.
├── docs/                          # Documentation
│   ├── 00_intended_use.md        # Problem definition and scope
│   ├── 01_plan.md                # Project planning
│   ├── 02_SRS.md                 # Software Requirements Specification
│   ├── 03_SDS.md                 # Software Design Specification
│   ├── 04_test_plan.md           # Testing strategy
│   ├── 05_acceptance_tests.md    # Acceptance criteria
│   ├── 06_traceability.md        # Requirements traceability
│   ├── 07_deploy.md              # Deployment guide
│   └── 08_known_issues.md        # Known limitations
├── src/                          # Source code
├── include/                      # Header files
├── tests/                        # Test files
├── .github/workflows/ci.yml      # GitHub Actions workflow
├── README.md                     # This file
├── CHANGELOG.md                  # Version history
├── AI_POLICY.md                  # AI usage policy
└── AI_USAGE.md                   # AI-generated content documentation
```

## Quick Start

### Prerequisites
- C++ compiler with C++17 support (g++ recommended)
- Git
- Docker (optional)

### Local Build
```bash
# Clone the repository
git clone https://github.com/Cyanlit/11402_CS351_Project0.git
cd 11402_CS351_Project0

# Build the project
cd src
g++ -std=c++17 -o twosum main.cpp twosum.cpp

# Run tests
./twosum
```

### Docker Build
```bash
# Build Docker image
docker build -t twosum .

# Run tests in container
docker run twosum
```

## Project Status
- ✅ Core algorithms implemented
- ✅ Comprehensive test suite
- ✅ GitHub Actions CI/CD
- ✅ Docker containerization
- ✅ Complete documentation
