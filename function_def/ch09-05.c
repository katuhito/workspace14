#include <stdio.h>

//lenで指定した数だけCで指定した文字を出力する関数
int test(len, c)
  int len; //出力する関数
  char c; //出力する文字
{
    for (int i = 0; i < len; i++) {
        printf("%c", c);
    }
    puts("");
    return len;
}

int main()
{
     test(4, '!', 8); //余分なパラメータ８があるが、コンパイラは警告を出力しない。
}

//実行結果
//!!!!
