//add2.c int=>char
#include <stdio.h>

int main()
{
    signed char s = 100;
    unsigned char u = 100;

    signed char a = s + u;
    printf("aの場合 %d+%d = %d\n", s, u, a);

    unsigned char b = s + u;
    printf("bの場合 %d+%d = %d\n", s, u, b);

    return 0;
}

