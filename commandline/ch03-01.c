// 加算結果を一度変数に設定する例

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("%d\n", sum);
}

