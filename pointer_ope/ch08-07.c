//ポインタ演算の結果に対して間接演算子を適用して値を取得できる。

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t array[]={1,2,3,4};
    int32_t *p = array;
    for (int i=0; i<4; i++) {
        printf("*(p+%i)=%i\n", i, *(p+i));
    }
}

//ポインタ演算の2項演算子+,-は、間接演算子よりも優先度が低いため、ポインタ演算式は()で囲む必要がある。
