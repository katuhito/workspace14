//main関数のargcに3、argvの配列に["./a.out", "b", "c"]を与えた場合
#include <stdio.h>

int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++){
        int i = 0;   //変数iが宣言されて0に初期化される
        if(i < 3){   //変数iは0なので真
            puts(argv[i]);   //ループ本体を実行する。変数iは0なので"./a.out"が出力される
            i++;   //初期値が変更されて変数iは0から1になる
            if(i < 3){
                puts(argv[i]);  //argv[1]なので"b"が出力される
                i++;   //初期値が変更されて変数iは1から2になる
                if(i < 3){
                    puts(argv[i]);   //argv[2]なので"c"が出力される
                    i++;   //初期値が変更されて変数iは2から3になる
                    if(i < 3){   //iが3なので条件を満たさない。よってループは最初に戻る。与えたargcの値は3なので、ループは3回繰り返される

                    }
                }
            }
        }
    }
}
