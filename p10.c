// #include<stdio.h>
// int main()
// {
//     auto int a=3;
//     {
//         auto int a=5;
//         printf("%d",a);
//     }
//     printf("%d",a);
// }

#include<stdio.h>
int main()
{
     register int a=3;
    {
         register int a=5;
        printf("%d\n",a);
    }
    printf("%d",a);
}