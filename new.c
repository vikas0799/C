#include <stdio.h>

static int value = 5;
void func(int);
int main()
{
    // printf("Hello World");
    while(value--)func(value);
    printf("%d\n", value);
    return 0;
}

void func(int val){
    static int value = 0;
    for(;value<5; value++)
    printf("%d\n",value);
}