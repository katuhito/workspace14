//qsortを使用してint32_tの配列の内容をソートして出力する。

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

//p0がポイントする値が大きければ１以上の整数、等しければ0、小さければ負の整数を返す関数
//プロトタイプ宣言
int compare(const void *p0, const void *p1)
{
    //p0,p1はint32_tの配列のいずれかの要素をポイントしているので、int32_t*にキャスとしてから値を取得する。
    return *(int32_t *)p0 - *(int32_t *)p1;
}

//main関数
int main()
{
    int32_t array[] = {32, 18, 97, 5, -4, 32, 10, -99};
    //qsortの呼び出し
    qsort(array, sizeof(array) / sizeof array[0], sizeof(int32_t), compare);
    for (size_t i = 0; i < sizeof(array) /sizeof array[0]; i++) {
        printf("%i\n", array[i]);
    }
}