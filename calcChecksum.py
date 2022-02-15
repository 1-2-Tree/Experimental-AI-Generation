#!/usr/bin/env python import os import hashlib def checksum(filename): with open(filename, "rb") as f: data = f.read() return hashlib.sha256(data).hexdigest() if __name__ == "__main__": print("

Calculating checksum for %s" % filename) checksum(filename)
