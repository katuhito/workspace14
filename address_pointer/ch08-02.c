//ポインタ変数に間接演算子を適用すると、ポインタ変数が格納しているアドレスからポインタ変数の型に相当する内容を取得できる。

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t x = 891;
    int32_t *xptr = &x;
    //*xptrは、xptrが格納する変数xのアドレスの値(=変数xの内容)
    printf("x=%i, *xptr=%i\n", x, *xptr);
    char y = 'a';
    char *yptr = &y;
    //*yptrは、yptrが格納する変数yのアドレスが指す値(=変数yの内容)
    printf("y=%c, *yptr=%c\n", y, *yptr);
}