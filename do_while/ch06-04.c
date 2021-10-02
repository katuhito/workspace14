#include <stdio.h>

int main(int argc, char *argv[])
{
    do {
        int i = argc; //変数iの有効範囲はこの複合分の中に限定される
        printf("*");
    } while (--i);  //複合文の外側なのでiは未定義となる
}