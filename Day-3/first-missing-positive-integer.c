#include <stdio.h>

int main() {
    int arr[1000], n, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // move all non-positive integers to the end of the array
    j = n - 1;
    for (i = n - 1; i >= 0; i--) {
        if (arr[i] <= 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    // mark the positive integers as visited
    for (i = 0; i <= j; i++) {
        int idx = (arr[i] > 0) ? arr[i] : -arr[i];
        if (idx <= j + 1 && arr[idx - 1] > 0) {
            arr[idx - 1] = -arr[idx - 1];
        }
    }

    // find the first missing positive integer
    for (i = 0; i <= j; i++) {
        if (arr[i] > 0) {
            printf("The first missing positive integer is %d\n", i + 1);
            return 0;
        }
    }

    printf("The first missing positive integer is %d\n", j + 2);

    return 0;
}