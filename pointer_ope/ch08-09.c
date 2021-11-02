//配列のサイズと要素数を求めるのにsizeof演算子を使用する。

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int32_t array[argc * 4];  //引数の数の4倍の要素数の配列
    printf("array size = %zu, count = %zu\n", sizeof array, sizeof array / sizeof array[0]);
}