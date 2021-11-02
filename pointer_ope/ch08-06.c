//配列の添え字（[インデックス記法]）はポインタ変数に対する演算を簡略化した書き方となる。ある型の配列の要素のアドレスとポインタ変数の加減算の結果を比較してみる。

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t array[]={1,2,3,4};
    int32_t *p = array;
    for (int i=0; i<4; i++) {
        printf("array[%i]=%i, &array[%i]=%p, p+%i=%p\n", i, array[i], i, &array[i], i, p+i);
    }

}