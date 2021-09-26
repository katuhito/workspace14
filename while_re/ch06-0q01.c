#include <stdio.h>

int main()
{
    int a[10];
    for (int i=0; i<10; i++){
        //?:条件演算子
        a[i] = (i%2)?i*10:i*2;
    }
    for (int i=0; i<10; i++){
        printf("%i\n", a[i]);
    }
}