# Traceability Matrix

## Requirements Traceability

| Requirement ID | Description | Implementation | Test Case | Status |
|----------------|-------------|----------------|-----------|--------|
| FR1.1 | TwoSumArray accepts vector and target | twosum.cpp: TwoSumArray | TC001-TC005 | ✓ |
| FR1.2 | TwoSumArray returns two indices | twosum.cpp: TwoSumArray | All tests | ✓ |
| FR1.3 | TwoSumArray O(n²) complexity | Nested loops in TwoSumArray | Performance verified | ✓ |
| FR1.4 | No same element reuse | Index check i < j | All tests | ✓ |
| FR2.1 | TwoSumHashTable accepts vector and target | twosum.cpp: TwoSumHashTable | TC001-TC005 | ✓ |
| FR2.2 | TwoSumHashTable returns two indices | twosum.cpp: TwoSumHashTable | All tests | ✓ |
| FR2.3 | TwoSumHashTable O(n) complexity | Single pass with hash map | Performance verified | ✓ |
| FR2.4 | No same element reuse | Hash map prevents reuse | All tests | ✓ |
| FR3.1 | Basic example test | testTwoSumArray/testTwoSumHashTable | TC001 | ✓ |
| FR3.2 | Negative numbers test | testTwoSumArray/testTwoSumHashTable | TC002 | ✓ |
| FR3.3 | Duplicate values test | testTwoSumArray/testTwoSumHashTable | TC003 | ✓ |
| FR3.4 | Zero values test | testTwoSumArray/testTwoSumHashTable | TC004 | ✓ |
| FR3.5 | Small input test | testTwoSumArray/testTwoSumHashTable | TC005 | ✓ |

## Non-Functional Requirements Traceability

| Requirement ID | Description | Implementation | Verification | Status |
|----------------|-------------|----------------|--------------|--------|
| NFR1.1 | TwoSumHashTable O(n) time | Single loop with hash operations | Code review | ✓ |
| NFR1.2 | TwoSumArray O(n²) time | Nested loops | Code review | ✓ |
| NFR2.1 | C++17 compatibility | -std=c++17 flag | Compilation success | ✓ |
| NFR2.2 | STL only | No external libraries | Code review | ✓ |
| NFR3.1 | g++ compilation | GitHub Actions workflow | CI build | ✓ |
| NFR3.2 | Ubuntu compatibility | Ubuntu runner | CI execution | ✓ |
| NFR3.3 | Docker compatibility | Dockerfile | Docker build | ✓ |

## Document Traceability

| Document | Purpose | Requirements Covered | Status |
|----------|---------|---------------------|--------|
| README.md | Project overview and requirements | All functional requirements | ✓ |
| 00_intended_use.md | Problem definition and scope | Project scope and constraints | ✓ |
| 01_plan.md | Project planning and milestones | Project management | ✓ |
| 02_SRS.md | Software requirements | FR1-FR3, NFR1-NFR3 | ✓ |
| 03_SDS.md | Software design | Implementation details | ✓ |
| 04_test_plan.md | Testing strategy | Test coverage | ✓ |
| 05_acceptance_tests.md | Acceptance criteria | Project completion | ✓ |
| 06_traceability.md | Requirements linking | All requirements | ✓ |
| 07_deploy.md | Deployment instructions | Build and run instructions | Pending |
| 08_known_issues.md | Known limitations | Project limitations | Pending |

## Code to Requirements Traceability

| Code File | Functions | Requirements Implemented |
|-----------|-----------|--------------------------|
| twosum.h | Function declarations | Interface requirements |
| twosum.cpp | TwoSumArray | FR1.1-FR1.4 |
| twosum.cpp | TwoSumHashTable | FR2.1-FR2.4 |
| main.cpp | testTwoSumArray | FR3.1-FR3.5 |
| main.cpp | testTwoSumHashTable | FR3.1-FR3.5 |
| .github/workflows/ci.yml | Build and test workflow | NFR3.1-NFR3.2 |
| Dockerfile | Container build | NFR3.3 |

## Test to Code Traceability

| Test Function | Code Under Test | Requirements Verified |
|---------------|-----------------|----------------------|
| testTwoSumArray | TwoSumArray | FR1.1-FR1.4, FR3.1-FR3.5 |
| testTwoSumHashTable | TwoSumHashTable | FR2.1-FR2.4, FR3.1-FR3.5 |
| CI Build | All code | NFR2.1-NFR2.2, NFR3.1-NFR3.2 |
| Docker Build | All code | NFR3.3 |