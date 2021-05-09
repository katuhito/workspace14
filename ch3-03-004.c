//コマンドライン引数にて、２つの値の商と余り

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int quo = atoi(argv[1]) /atoi(argv[2]);
    printf("商：%d\n", quo);

    int rem = atoi(argv[1]) % atoi(argv[2]);
    printf("余り：%d\n", rem);
}