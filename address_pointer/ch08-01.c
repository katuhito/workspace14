//ポインタ変数が格納する値はアドレスである。

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t x = 891;
    int32_t *xptr = &x;
    // xptrが格納しているのは変数ｘのアドレス
    printf("x=%i, *xptr=%p\n", x, xptr);
    char y = 'a';
    char *yptr = &y;
    // yptrが格納しているのは変数yのアドレス
    printf("y=%c, *yptr=%p\n", y, yptr);
}