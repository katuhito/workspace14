#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strtoupper(char s[])
{
    size_t len = strlen(s);
    for (int i = 0; i < len; i++) {
        s[i] = toupper(s[i]);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        return 1;
    }
    char s1[strlen(argv[1]) + 1];
    char s2[strlen(argv[2]) + 1];
    strcpy(s1, argv[1]);
    strcpy(s2, argv[2]);
    strtoupper(s1);
    strtoupper(s2);
    int diff = strcmp(s1, s2);
    if (diff > 0) {
        puts("1");
    } else if (diff == 0) {
        puts("0");
    } else {
        puts("-1");
    }
}