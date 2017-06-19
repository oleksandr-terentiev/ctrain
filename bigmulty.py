#!/usr/bin/python

# Usage: bigmulty.py <file1> <file2>

import sys

with open(sys.argv[1], 'r') as myfile:
    num1 = int(myfile.read())  # Put first number from file1 to num1

with open(sys.argv[2], 'r') as myfile:
    num2 = int(myfile.read())  # Put second number from file2 to num2

with open('result.txt', 'w') as resfile:
    resfile.write(str(num1 * num2))  # Write result of calculation to a file
