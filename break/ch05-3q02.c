#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    int value = INT_MAX;
    for(int i = 1; i < argc; i++){
        int divisor = atoi(argv[i]);
        if(!divisor){
            puts("divisor is 0");
            return 1;
        }
        value /= divisor;
    }
    printf("%i\n", value);
}
