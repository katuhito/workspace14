#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 1;
    for(; i < argc; i++){
        if(atoi(argv[i]) == 0){
            break;
        }
        puts(argv[i]);
    }
    printf("index=%i\n", i);
}