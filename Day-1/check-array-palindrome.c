#include<stdio.h>
#include<stdlib.h>

int main(){
    int n; 
    scanf("%d", &n);
    int *arr = (int *) malloc(n *sizeof(int));
    
    for(int i = 0; i<n; i++) scanf("%d", &arr[i]);

    int s, e;
    s = 0;
    e = n-1;

    while(arr[s++] < arr[e--])
    {

    }
    
    if(arr[s] == arr[e]) printf("YES\n");
    else printf("NO\n");

    //for(int i = 0;i <n; i++) printf("%d ", arr[i]);
    return 0;
}