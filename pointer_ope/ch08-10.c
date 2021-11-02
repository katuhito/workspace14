//ポインタ変数に対して[]を使用して配列のインデックスを付けると、[]内に記述したインデックス値がポインタ変数に対して加算され、そのあとに間接演算を実行した結果が得られる。

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t array[]={1,2,3,4};
    int32_t *p = array;
    for (size_t i=0; i<sizeof array / sizeof(int32_t); i++) {
        //p[i]と書くと*(p+i)と書くのと同じ結果になる
        printf("array[%zu] = %i\n", i, p[i]);  //size_tに対する書式指定子は%zu
    }
}

//[]は後置演算子（配列演算子）