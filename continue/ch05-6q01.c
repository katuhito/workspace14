#include <stdio.h>
#include <stdbool.h>
#define RANGE_BEGIN 30
#define RANGE_END 80

int main()
{
    bool multiples[RANGE_END + 1] = {};  //ある数の倍数ならば真に設定する
    //2以上の数について別の数の倍数かどうかを調べる
    for(int i = 2; i <= RANGE_END; i++)
    {
        if(multiples[i]){
            //倍数ならばスキップ
            continue;
        }
        if(i >= RANGE_BEGIN){
            //出力範囲ならば出力する
            printf("%i\n", i);
        }
        //この数の倍数を真に設定する
        for(int j = 1; i * j <= RANGE_END; j++){
            multiples[i * j] = true;
        }
    }
}