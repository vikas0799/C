#include<stdio.h>
void pi(int n){
    if(n==0)
    return ;

    printf("%d\n",n);
    n--;
    pi(n);
    // printf("%d\n",n);
}
int main()
{
    int n=10;
    pi(n);
}