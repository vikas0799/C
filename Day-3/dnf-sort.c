#include <stdio.h>

void dnf_sort(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                // swap arr[low] and arr[mid], increment low and mid
                arr[low] ^= arr[mid];
                arr[mid] ^= arr[low];
                arr[low] ^= arr[mid];
                low++;
                mid++;
                break;
            case 1:
                // increment mid
                mid++;
                break;
            case 2:
                // swap arr[mid] and arr[high], decrement high
                arr[mid] ^= arr[high];
                arr[high] ^= arr[mid];
                arr[mid] ^= arr[high];
                high--;
                break;
        }
    }
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    dnf_sort(arr, n);

    printf("After sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}