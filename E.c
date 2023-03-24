#include <stdio.h>
int main()
{
	char arr[10];
	 scanf("%[^\n]%*c", arr);
	int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
	for (i = 0; i < 10; i++) {
		if(arr[i]=='a')
        cnt0++;
        if(arr[i]=='b')
        cnt1++;
        if(arr[i]=='c')
        cnt2++;
	}
	i=0;
	while (cnt0 > 0) {
		arr[i++] = 'a';
		cnt0--;
	}
	while (cnt1 > 0) {
		arr[i++] = 'b';
		cnt1--;
	}
	while (cnt2 > 0) {
		arr[i++] = 'c';
		cnt2--;
	}
		printf("%s",arr);
}
