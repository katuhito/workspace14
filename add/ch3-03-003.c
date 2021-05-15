//コマンドライン引数。２つの値の積

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int multi = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", multi);
}