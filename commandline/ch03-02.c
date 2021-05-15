//加算式を直接printfの引数に指定する例

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
}