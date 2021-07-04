//FizzBuzz

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    if(argc != 2){
        puts("no arguments");
        return 1;
    }
    int n = atoi(argv[1]);
    if(n % 15 == 0) {
        puts("FizBuz");
    } else if (n % 5 == 0) {
        puts("Baz");
    } else if (n % 3 == 0) {
        puts("Fiz");
    } else {
        puts(argv[1]);
    }
}
