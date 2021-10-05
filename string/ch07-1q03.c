#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if(argc < 2) {
        puts("英大文字または数字を入力してください");
    } else {
        char c = argv[1][0];
        if (isupper(c)) {
            printf("%c\n", tolower(c));
        } else if (isdigit(c)) {
            printf("%i\n", c - '0' + 3);
        } else {
            puts("英大文字または数字を入力してください");
        }
    }
}