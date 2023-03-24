#include <stdio.h>
void Binary(int n, int arr[], int i)
{  
    if(i==n){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return ;
    }
	
	arr[i] = 0;
	Binary(n, arr, i + 1);

	arr[i] = 1;
	Binary(n, arr, i + 1);
}

int main()
{
	int n;
    scanf("%d",&n);
	int arr[n];
    
	Binary(n, arr, 0);
    
	return 0;
}
