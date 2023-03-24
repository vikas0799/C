#include<stdio.h>
int fun(int x){
static  int y=0;
y=y+1;
return x+y;
}
int main()
{
    int n=3,s1,s2;
    s1=fun(n);
    s2=fun(n);
    printf("%d  %d",s1,s2);
}