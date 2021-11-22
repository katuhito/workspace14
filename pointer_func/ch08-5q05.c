#include <stdio.h>
#include <stdlib.h>

int compare(const void *p0, const void *p1)
{
    //降順なのでp0が小さければ負を返すようにする
    return *(int*)p1 - *(int*)p0;
}
int main(int argc, char *argv[])
{
    if(argc < 2){
        return 1;
    }
    int array[argc - 1];
    for (int i=1; i<argc; i++) {
        array[i - 1] = atoi(argv[i]);
    }
    qsort(array, argc - 1, sizeof(int), compare);
    for (int i=0; i<argc-1; i++) {
        printf("%i\n",array[i]);
    }
}