#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    if(argc == 1){
        puts("no argument");
        return 1;
    }
    long long result = 1;
    for (int i=1; i<argc; i++){
        int val = atoi(argv[i]);
        if(!val){
            continue;
        }
        if(result * val > INT_MAX) {
            puts("overflow!");
            break;
        }
        result *= val;
    }
    printf("%lli\n", result);
}