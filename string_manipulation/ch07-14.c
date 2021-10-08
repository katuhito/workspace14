#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 5

int main(int argc, char *argv[])
{
    if (argc == 2) {
        //ナル文字用に1要素分を確保
        char name[MAX_NAME_LEN + 1];
        strncpy(name, argv[1], MAX_NAME_LEN);
        //最後の要素を確実にナル文字とする
        name[MAX_NAME_LEN] = '\0';
        printf("Hello %s!\n", name);
    }
}