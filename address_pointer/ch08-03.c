//ポインタ変数に間接演算子を適用すると、ポインタ変数が格納しているアドレスに対してポインタ変数の型に相当する内容を設定することができる

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t x;
    int32_t *xptr = &x;
    *xptr = 321;   //xptrを通して間接的に変数xに値を設定
    printf("x=%i, *xpyr=%i\n", x, *xptr);
    char y;
    char *yptr = &y;
    *yptr = 'x';   //yptrを通して間接的に変数yに値を設定
    printf("y=%c, *yptr=%c\n", y, *yptr);
}