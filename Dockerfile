# Use Ubuntu as base image
FROM ubuntu:22.04

# Install g++
RUN apt-get update && apt-get install -y g++ && rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /app

# Copy source files
COPY src/ ./src/

# Build the project
RUN g++ -std=c++23 -o twosum src/main.cpp src/twosum.cpp

# Run tests
CMD ["./twosum"]