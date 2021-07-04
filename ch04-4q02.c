#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2){
        puts("specify a number");
    }else{
        int n = atoi(argv[1]);
        if (n > 123) {
            puts("greater");
        } else if (n < 123) {
            puts("less");
        } else {
            puts("Bingo!");
        }
    }
}