#include <stdio.h>
#define TARGET_COUNT 3

int main(int argc, char *argv[])
{
    if (argc < 2) {
        puts("コマンドライ引数を指定して下さい。");
    } else {
        char a[TARGET_COUNT + 1];
        int last = 0;
        for (; last < TARGET_COUNT && argv[1][last]; last++) {
            a[last] = argv[1][last];
        }
        a[last] = '\0';
        puts(a);
    }
}