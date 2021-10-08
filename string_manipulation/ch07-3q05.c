#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        return 1;
    }
    size_t len = 0;
    for (int i = 1; i < argc; i++) {
        len += strlen(argv[i]);
    }
    char result[len + 1];
    result[0] = '\0';
    for (int i = 1; i < argc; i++) {
        strcat(result, argv[i]);
    }
    for (size_t i = 0; i < strlen(result); i++) {
        result[i] = tolower(result[i]);
    }
    puts(result);
}