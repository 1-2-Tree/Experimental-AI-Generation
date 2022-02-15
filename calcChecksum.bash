#!/bin/bash

#

# Script to calculate checksum of a file

#

# Usage:

# ./checksum.sh <file>

#

#

#

if [ -z "$1" ]; then

echo "Usage: ./checksum.sh <file>"

exit 1

fi



# Read input file

input_file=$1



# Calculate checksum of input file

checksum=$(md5sum $input_file)



# Print checksum

echo "$checksum"
