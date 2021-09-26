//要素が10個あるint型配列を宣言して、要素0は9、要素1は8、…要素9は0となるプログラム
#include <stdio.h>

int main()
{
    int a[10];
    //カンマ演算子を使用する
    for(int i=0, j=9; i<10; i++, j--){
        a[i] = j;
    }
}