#include <stdio.h>
int fun_sum(int x, int y)
{
if(x == y)
return x;
else
return x + fun_sum(x + 1, y);
}
int main()
{
int x,y,sum,i;

scanf("%d%d",&x,&y);
sum = fun_sum(x, y);
printf("%d\n",sum);
(sum%2==0)?printf("HAPPY\n"):printf("SAD\n");
return 0;
}
