#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc > 1) {
        size_t len = strlen(argv[1]);
        char rev[len + 1];
        rev[len] = '\0';
        for (size_t i = 0; i < len; i++) {
            rev[len - i - 1] = argv[1][i];
        }
        printf("%s => %s\n", argv[1], rev);
    }
}