//ポインタ変数の内容は、他のポインタ変数に代入することができる

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t x = 891;
    int32_t *xptr = &x;
    //xptrが格納しているのは変数xのアドレス
    printf("x=%i, xptr=%p\n", x, xptr);
    //ポインタ変数zptrにxptrの内容（変数xのアドレス）を代入
    int32_t *zptr = xptr;
    //zptrの内容はxのアドレスなので、間接演算を適用するとxの値が取得できる
    printf("*zptr=%i, zptr=%p\n", *zptr, zptr);
}