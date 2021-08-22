#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        puts("HelloWorld!");
    } else {
        puts(argv[1]);
    }
}
