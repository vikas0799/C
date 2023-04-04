#include<stdio.h>
#include<stdlib.h>

const int mxSize = 100;

int main(){
    char str[mxSize];

    fgets(str, sizeof(str),stdin);

    printf("This is the input string:%s ", str);
    return 0;
}