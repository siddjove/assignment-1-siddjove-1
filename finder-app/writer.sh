#!/bin/bash
# writer.sh
# Author: Siddjove

writefile=$1
writestr=$2

# Check arguments
if [ $# -ne 2 ]; then
    echo "Error: Two arguments required. Usage: $0 <writefile> <writestr>"
    exit 1
fi

# Create directory if it doesn't exist
dir=$(dirname "$writefile")
mkdir -p "$dir"

# Write string to file
echo "$writestr" > "$writefile" 2>/dev/null

# Check if file was created successfully
if [ $? -ne 0 ]; then
    echo "Error: Could not create file $writefile"
    exit 1
fi

exit 0

