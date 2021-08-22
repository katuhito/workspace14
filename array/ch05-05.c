// i++ インクリメント演算子と配列 => 配列の場合のiの値は出力ごとに配列の
// 順番ごとに取り出される。その番号にインクリメントを適用する。
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[] = { 1, 2, 3 };
    int i = 0;
    printf("%i\n", a[i++]);  // => 1
    printf("%i\n", a[i++]);  // => 2
    printf("%i\n", a[i]);  // => 3
}
