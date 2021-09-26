#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2){
        puts("give filename");
        return 1;
    }
    FILE *f = fopen(argv[1], "r");
    char ch;
    while ((ch = fgetc(f)) != EOF) {
        fputc(ch, stdout);
    }
    fclose(f);
}