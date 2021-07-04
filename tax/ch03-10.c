#include <stdio.h>

int consumption_tax(int x) //消費税を返す関数
{
    return x * 8 / 100;
}

int main()
{
    int price1 = 100;
    int price2 = 230;
    printf("%i\n", consumption_tax(price1));
    printf("%i\n", consumption_tax(price2 + 10));
}
