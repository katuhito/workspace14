#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 3) {
        size_t first = strlen(argv[1]);
        size_t second = strlen(argv[2]);
        char result[first + second + 1];
        strcpy(result, argv[1]);
        strcat(result, argv[2]);
        puts(result);
    }
}