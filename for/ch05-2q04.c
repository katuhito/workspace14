#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        puts("usage: ./a.out number");
        return 1;
    }
    int sum = 0;
    for(int i = 1; i <= atoi(argv[1]); i++)
    {
        sum += i;
    }
    printf("%i\n", sum);
}