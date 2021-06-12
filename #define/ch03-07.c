#include <stdio.h>
#define CONSUMPTION_TAX_RATE 8  //tax rate

int main()
{
    int price1 = 100;
    int price2 = 230;
    printf("%i\n", price1 * CONSUMPTION_TAX_RATE / 100);
    printf("%i\n", price2 * CONSUMPTION_TAX_RATE / 100);
}
