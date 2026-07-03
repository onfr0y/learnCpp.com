#!/usr/bin/env bash

# Exit immediately if a command exits with a non-zero status
set -e

# Color definitions
RED='\033[0;31m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Check if a directory argument was provided
if [ -z "$1" ]; then
    echo -e "${YELLOW}Usage: ./run.sh <day_dir_name>${NC}"
    echo -e "Example: ./run.sh day_01"
    echo -e "\nAvailable daily directories:"
    for d in day_*; do
        if [ -d "$d" ]; then
            echo -e "  - $d"
        fi
    done
    exit 1
fi

DAY_DIR="$1"

# Check if directory exists
if [ ! -d "$DAY_DIR" ]; then
    echo -e "${RED}Error: Directory '$DAY_DIR' does not exist.${NC}"
    exit 1
fi

# Check if main.cpp exists in directory
if [ ! -f "$DAY_DIR/main.cpp" ]; then
    echo -e "${RED}Error: '$DAY_DIR/main.cpp' not found.${NC}"
    exit 1
fi

# Detect compiler
if command -v clang++ &> /dev/null; then
    COMPILER="clang++"
elif command -v g++ &> /dev/null; then
    COMPILER="g++"
else
    echo -e "${RED}Error: Neither clang++ nor g++ compiler was found on your system.${NC}"
    exit 1
fi

echo -e "${BLUE}Using compiler: ${COMPILER}${NC}"
echo -e "${BLUE}Compiling ${DAY_DIR}/main.cpp with C++20...${NC}"

# Compile the day's code
# -std=c++20 enables modern C++ features
# -Wall -Wextra -Wpedantic enables extensive compiler warnings for clean code
$COMPILER -std=c++20 -Wall -Wextra -Wpedantic "$DAY_DIR/main.cpp" -o "$DAY_DIR/bin_run"

echo -e "${GREEN}Compilation successful! Executing target...${NC}"
echo -e "${BLUE}--------------------------------------------------------${NC}"

# Execute the binary
./"$DAY_DIR/bin_run"

echo -e "${BLUE}--------------------------------------------------------${NC}"
echo -e "${GREEN}Execution finished.${NC}"
