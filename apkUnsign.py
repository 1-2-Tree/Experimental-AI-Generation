#!/usr/bin/env python

import os

import sys

if len(sys.argv) != 3:

print("Usage: python apk_unsign.py <apk_file> <output_file>")

sys.exit(1)

apk_file = sys.argv[1]

output_file = sys.argv[2]

with open(apk_file, "rb") as f:

apk = f.read()

with open(output_file, "wb") as f:

f.write(apk)
