#include <stdio.h>

static int ex1(int x, int y) //ex1はstatic指定しているのでこのファイル内からのみ呼び出せる。
{
    printf("ch09-04-ex1: %i\n", x + y);
    return x + y;
}
extern int ex2(int x, int y) //別のファイルから呼び出せる関数
{
    printf("ex2: %i\n", x * y);
    return ex1(x, y);
}
