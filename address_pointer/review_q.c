//次の変数宣言を記述
//「3」という文字で初期化した変数three
char three = '3';
//「あ」というワイド文字で初期化した変数a
wchar_t a = L'あ';
//リテラル"Hello"で初期化した文字列として使用可能な文字配列hello
char hello[] = "Hello";
//"Hello"を配列初期化子で初期化した文字列として利用可能な文字配列hello
char hello[] = {'H', 'e', 'l', 'l', 'o', '\0'};

//内容が空（0文字）の文字列に必要な文字配列の要素数はいくつか？
終端ナル文字分の1

//次の設問に対応するコード
//変数lenを文字列の長さで初期化する(変数lenに対する適切な型名も記述する)
size_t len = strlen(x);
//文字列xの内容をコピーするために文字配列yを宣言する。その次にxをｙにコピーする。
size_t len = strlen(x) + 1;
char y[len];
strcy(y, x);
//文字列xと文字列yが同じ内容ならば、「match!」をコンソールへ出力する
if (!strcmp(x, y)) {
    puts("match!");
}
//または
if (strcmp(x, y) == 0) {
    puts("match!");
}


//コマンドライン引数で与えられた文字列と逆順にした文字列をコンソールへ出力するプログラム（コマンドライン引数が与えられていない場合には何も出力しない。また、2つめ以降の引数は無視する。）=>ch08-0q04.c
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc > 1) {
        size_t len = strlen(argv[]);
        char rev[len + 1];
        rev = '\0';
        for (size_t i = 0; i < len; i++) {
            rev[len - i - 1] = argv[1][i];
        }
        print("%s => %s\n", argv[1], rev);
    }
} 

