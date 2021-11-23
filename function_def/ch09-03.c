#include <stdio.h>

extern int ex2(int x, int y); //ex2関数のプロトタイプで、ex2はch09-04.cにある
static int ex1(int x, int y)  //ex1はstatic指定しているのでこのファイル内からのみ呼び出すことができる
{
    printf("ch09-03-ex1: %i\n", x + y);
    return x + y;
}
int main()
{
    ex1(2, 3);
    ex2(5, 6);
}