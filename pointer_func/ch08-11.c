//関数ポインタ
//最初の引数で与えられた文字が「+」なら、以降の引数の総和を出力し、「x」なら以降の引数をすべて乗じた値を出力するプログラム

#include <stdio.h>
#include <stdlib.h>

//プロトタイプ宣言
int add(int x, int y)
{
    return x + y;
}
int mul(int x, int y)
{
    return x * y;
}

//main関数
int main(int argc, char *argv[])
{
    if (argc < 3) {
        return 1;
    }
    //プログラムが使用する関数を決定する
    int (*calc)(int, int);  //使用する関数を保持する関数ポインタ変数の宣言(プロトタイプ宣言)
    char ch = *argv[1];  //char*に間接演算子を適用して最初の文字を取り出す
    int result;  //途中までの結果を保持する変数
    if (ch == '+') {
        calc = add;  // +の場合はadd関数を使用する
        result = 0;  //初期値は0
    } else if (ch == 'x') {
        calc = mul; // xの場合はmul関数を使用する
        result = 1; //初期値は１
    } else {
        return 2;
    }
    //以降、引数が+かxか条件判断が不要となる
    for (int i = 2; i < argc; i++) {
        result = calc(result, atoi(argv[i]));
    }
    printf("%i\n", result);
}