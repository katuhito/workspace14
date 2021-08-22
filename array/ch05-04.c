// ４つの要素のint型の配列aを宣言し、各要素を１から４までの数で初期化し、
// その後、要素１に５を加算し、要素２の内容を１０倍する。

#include <stdio.h>

int main(void)
{
    int a[4] = { 1,2,3,4 };
    printf("%i\n", a[0]);  // => 1
    printf("%i\n", a[1]);  // => 2
    printf("%i\n", a[2]);  // => 3
    printf("%i\n", a[3]);  // => 4
    a[1] += 5;
    a[2] *= 10;
    printf("%i\n", a[1]);  // => 7
    printf("%i\n", a[2]);  // => 30
    
}