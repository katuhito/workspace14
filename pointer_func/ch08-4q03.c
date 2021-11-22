//qsortを使用してコマンドライン引数で与えた単語を昇順にソートして出力するプログラム
//qsortが比較関数へ与える引数は要素に関するポインタである。argv配列の要素の型はchar*(char型へのポインタ)なので、qsortが比較関数へ与える引数の型はchar**(char型へのポインタへのポインタ)に対して間接演算子*を適用すると,結果はchar*(char型へのポインタ)となる

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *p0, const void *p1)
{
    return strcmp(*(char**)p0, *(char**)p1);
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        return 1;
    }
    char * array[argc - 1];
    for(int i=1; i<argc; i++) {
        array[i - 1] = argv[i];
    }
    qsort(array,argc - 1, sizeof(char*), compare);
    for(int i=0; i<argc - 1; i++) {
        puts(array[i]);
    }
}
