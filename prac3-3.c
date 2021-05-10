#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int sum, diff, prod, quot; //変数宣言は「,」で区切って同時に複数の変数を宣言できる

    sum = x + y;
    diff = x - y;
    prod = x * y;
    quot = x / y;

    printf("%d, %d, %d, %d\n", sum, diff, prod,quot);
}

