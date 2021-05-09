//コマンドライン引数　２つの数値の差

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sub = atoi(argv[1]) - atoi(argv[2]);
    printf("%d\n", sub);
}