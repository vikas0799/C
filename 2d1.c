//Transpose of matrix
#include<stdio.h>
int main(){
    int n,m; scanf("%d %d", &n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int brr[n][m];
    int a=0;

     for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
           brr[i][j]=arr[j][i];
        }
    }
    printf("Transpose of 2d Array \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
   return 0;
}