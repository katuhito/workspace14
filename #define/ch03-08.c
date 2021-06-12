#include <stdio.h>
#define CONSUMPTION_TAX * 8 /100  //消費税額を計算する

int main()
{
    int price1 = 100;
    int price2 = 230;
    printf("%i\n", price1 CONSUMPTION_TAX);
    printf("%i\n", price2 CONSUMPTION_TAX);
}
