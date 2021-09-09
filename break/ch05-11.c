#include <stdio.h>

int main()
{
    for(int x=0; x<5; x++){
        for(int y=0; y<5; y++){
            for(int z=0; z<5; z++){
                printf("x=%i, y=%i, z=%i\n", x, y, z);

                if(y == 2 && z == 3) {
                    puts("break => y == 2 && z == 3");
                    break;
                }
            }
            if(y == 3){
                puts("break => y == 3");
                break;
            }
        }
        if(x == 4){
            puts("break => x == 4");
            break;
        }
    }
}