//increment.c
#include <stdio.h>

int main()
{
    signed char s = 100;
    unsigned char u = 100;

    int i;
    for (i=100; i<=200; i++)
    {
        printf("%d %03d\n", s, u);
        s++;
        u++;
    }

    return 0;
}
