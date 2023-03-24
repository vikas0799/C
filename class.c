// https://codeforces.com/contest/1541/problem/A

#include <stdio.h>
int main()
{
    int T; scanf("%d",&T);
    while(T>0){
        T--;
        int n; scanf("%d",&n);
        if(n%2==0){
        for(int i=1;i<=n;i=i+2){
            printf(" %d %d",i+1,i);
        }
        }
        else{
            for(int i=1;i<=n-3;i=i+2){
            printf(" %d %d",i+1,i);
            }
            printf(" %d %d %d",n-1,n,n-2);
        }

        
    }
}
