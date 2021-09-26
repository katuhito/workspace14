#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 3){
        puts("specify from and to");
        return 1;
    }
    FILE *src = fopen(argv[1], "r");
    FILE *dst = fopen(argv[2], "w");
    int ch;
    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dst);
    }
    fclose(src);
    fclose(dst);
    
}