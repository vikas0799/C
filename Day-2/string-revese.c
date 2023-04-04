#include<stdio.h>
#include<stdlib.h>

const int mxSize = 100;

int main(){
    char str[mxSize];

    fgets(str, sizeof(str),stdin);

    int len = 0;
    while(str[len++] != '\0');


    // printf("%d", len);

    int s = 0;
    int e = len-2;

    while(s <= e)
    {
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
    }

    printf("This is the reversed string:%s ", str);
    return 0;
}