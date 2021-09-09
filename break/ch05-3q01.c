#include <stdio.h>

int main()
{
    for(int value = 1;;){
        value += value * 2;
        if(value < 0){
            printf("%i\n", value);
            break;
        }
    }
}