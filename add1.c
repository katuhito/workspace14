//add1.c
#include <stdio.h>

int main()
{
    signed int s = 100;
    unsigned int u = 100;

    signed int a = s + u;
    printf("aの場合 %d+%d = %d\n", s, u, a);

    unsigned int b = s + u;
    printf("bの場合 %d+%d = %d\n", s, u, b);

    return 0;
}
