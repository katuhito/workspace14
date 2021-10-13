#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        return 1;
    }
    if (strlen(argv[1]) == 1) {
        if (isalpha(argv[1][0])) {
            puts("A");
        } else if (isdigit(argv[1][0])) {
            puts("B");
        } else {
            puts("C");
        }
    }
}
