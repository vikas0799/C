
//addition of diagonal elements
#include<stdio.h>
int main(){
    int n,m; scanf("%d %d", &n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // printing diagonal elements
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j||(i+j)==n-1)
            printf("%d ",arr[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }

   //adding diagonal elements
    int sum=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j||(i+j)==n-1)
            sum =sum+arr[i][j];
        }
    }
    printf("%d",sum);
   return 0;
}