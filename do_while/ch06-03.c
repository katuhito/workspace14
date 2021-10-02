#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = argc;
    do {
        printf("*");
    } while (--i);
}