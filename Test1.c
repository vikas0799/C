#include <stdio.h>
int max(int x,int y){
    if(x>y)
    return x;
    return y;
}
int min(int x,int y){
    if(x>y)
    return y;
    return x;
}
int maxWater(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++) {

		int left = arr[i];
		for (int j = 0; j < i; j++) {
			left = max(left, arr[j]);
		}

		int right = arr[i];
		for (int j = i + 1; j < n; j++) {
			right = max(right, arr[j]);
		}

		res = res + (min(left, right) - arr[i]);
	}
	return res;
}

int main()
{
	int n; scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

	printf("%d", maxWater(arr, n));
	return 0;
}

