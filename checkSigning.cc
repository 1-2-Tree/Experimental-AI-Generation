#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

#include <android/log.h>

bool isWeakSignature(const char *filename) {

struct stat st;

if (stat(filename, &st) == -1) {

printf("%s: unable to stat

", filename);

return false;

}

if (S_ISREG(st.st_mode)) {

return strncmp(filename, "lib", 3) == 0;

}

return false;

}

int main(int argc, char *argv[]) {

if (argc != 2) {

printf("Usage: isWeakSignature <filename>

");

return 1;

}

bool result = isWeakSignature(argv[1]);

printf("%s: %s

", argv[1], result ? "weak" : "strong");

return 0;

}
