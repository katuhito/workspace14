#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int n = UINT_MAX;
    if (n + 1) {
        puts("true");
    }
}