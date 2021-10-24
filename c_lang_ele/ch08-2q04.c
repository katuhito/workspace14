#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t array[] = {1,2,3,4};
    unsigned char u = 'x';
    int32_t *p0 = array;  //&array[0]でも可 =>array配列の先頭アドレスで初期化されたポインタ変数p0を宣言
    int32_t *p3 = &array[2];  //array配列の値3のアドレスで初期化されたポインタ変数p3を宣言
    unsigned char *up = &u;   //変数uのアドレスで初期化されたポインタ変数upを宣言
    printf("%i, %i, %c\n", *p0, *p3, *up);   //p0,p3,upがポイントする値を出力するprintf関数を記述
    //出力 => 1,3,x
}