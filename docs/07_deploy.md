# Deployment Guide

## Prerequisites
- C++ compiler with C++17 support (g++ recommended)
- Git for version control
- Docker (optional, for containerized deployment)

## Local Deployment

### Method 1: Direct Compilation
1. Clone the repository:
   ```bash
   git clone https://github.com/Cyanlit/11402_CS351_Project0.git
   cd 11402_CS351_Project0
   ```

2. Navigate to source directory:
   ```bash
   cd src
   ```

3. Compile the project:
   ```bash
   g++ -std=c++17 -o twosum main.cpp twosum.cpp
   ```

4. Run the program:
   ```bash
   ./twosum
   ```

### Method 2: Using Make (if available)
```bash
make
./twosum
```

## Docker Deployment

### Build Docker Image
```bash
# From project root directory
docker build -t twosum .
```

### Run in Container
```bash
docker run twosum
```

### Interactive Container
```bash
docker run -it twosum bash
# Inside container, you can modify and rebuild
```

## CI/CD Deployment
The project includes GitHub Actions for automated deployment:

### Automatic Triggers
- Push to main branch
- Pull requests to main branch

### Manual Triggers
- Go to GitHub Actions tab
- Select "Build and Test C++ Project" workflow
- Click "Run workflow"

## Environment Requirements

### Minimum System Requirements
- OS: Linux, macOS, or Windows
- RAM: 256 MB
- Storage: 10 MB

### Compiler Requirements
- g++ 7.0+ or equivalent C++17 compiler
- Standard Template Library (STL) support

### Docker Requirements
- Docker Engine 20.0+
- Docker Compose (optional)

## Troubleshooting

### Compilation Errors
- Ensure C++17 support: `g++ --version`
- Update compiler if using older version
- Check for missing includes

### Runtime Errors
- Verify executable permissions: `chmod +x twosum`
- Check for library dependencies
- Run tests individually to isolate issues

### Docker Issues
- Ensure Docker daemon is running
- Check Docker version compatibility
- Verify Dockerfile syntax

## Production Deployment
For production use:
1. Use release builds with optimizations: `g++ -O2 -std=c++17 ...`
2. Consider static linking for distribution
3. Package with installation scripts
4. Set up monitoring and logging if needed

## Rollback Procedure
1. Checkout previous commit: `git checkout <commit-hash>`
2. Rebuild: `g++ -std=c++17 -o twosum main.cpp twosum.cpp`
3. Verify functionality: `./twosum`