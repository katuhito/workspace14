#include <stdio.h>

int main()
{
    for(int i = 1; i <= 50; i++){
        if(i % 15 == 0){
            puts("FizzBuzz");
            continue;
        }
        if(i % 5 == 0){
            puts("Buzz");
            continue;
        }
        if(i % 3 == 0){
            puts("Fizz");
            continue;
        }
        printf("%i\n", i);
    }
}