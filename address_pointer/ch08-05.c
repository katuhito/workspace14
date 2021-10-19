//関数のパラメータにポインタ変数を使用すると、関数を呼び出した側の変数に直接値をを設定することができる.

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void swap(int32_t *x, int32_t *y)  //変数の値を交換する関数swap()
{
    //ポインタ変数xがポイントする変数から値を取り出す
    int32_t temp = *x;
    *x = *y;   //ポインタ変数ｙがポイントする変数の値を、ポインタyがポイントする変数に代入する。
    *y = temp;  //ポインタyがポイントする変数にtempの値を代入する
}

int main(void)
{
    int32_t a = -99;
    int32_t b = 999;
    printf("a=%i, b=%i\n", a, b);
    //パラメータがポインタ変数なので、アドレス演算子を適用してアドレスを与える。
    swap(&a, &b);   //変数の値を交換する関数swap()
    printf("a=%i, b=%i\n", a, b);
}