#include <stdio.h>

extern int ex2(int x, int y);  //ch09-02.cの関数ex2の関数プロトタイプ

extern int ex1(int x, int y)
{
    printf("ex1:%i\n", x + y);
    return x + y;
}
int main()
{
    ex2(5, 6);
}
