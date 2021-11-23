#include <stdio.h>

extern int ex1(int x, int y);  // ch09-01.cの関数ex1のプロトタイプ

extern int ex2(int x, int y)
{
    printf("ex2:%i\n", x * y);
    return ex1(x, y);
}