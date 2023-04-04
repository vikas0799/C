#include<stdio.h>
#include<stdlib.h>

const int mxSize = 100;

int main(){
    char str[mxSize];

    fgets(str, sizeof(str),stdin);

    int count = 0;

    int len = 0;
    while(str[len] != '\0')
    {
        if(

            str[len] == 'a' || str[len] == 'A' ||
            str[len] == 'e' || str[len] == 'E' ||
            str[len] == 'i' || str[len] == 'I' ||
            str[len] == 'o' || str[len] == 'O' ||
            str[len] == 'u' || str[len] == 'U' 
        )
        count++;

        len++;
    }

    printf("This is vowels count:%d ", count);
    return 0;
}