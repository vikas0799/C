#include<stdio.h>
#include<stdlib.h>

int main(){
    int n; 
    scanf("%d", &n);
    int *arr = (int *) malloc(n *sizeof(int));
    
    for(int i = 0; i<n; i++) scanf("%d", &arr[i]);

    int lf, ls;

    lf = arr[n-1];
    ls = arr[n-2];

    for(int i = n-3; i>=0; i--)
    arr[i+2] = arr[i];

    arr[0] = ls;
    arr[1] = lf;

    for(int i = 0;i <n; i++) printf("%d ", arr[i]);
    return 0;
}