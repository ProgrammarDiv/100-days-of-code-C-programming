#include <stdio.h>

int findCeilIndex(int arr[], int size, int x) {
    int low = 0, high = size - 1;
    int ceilIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;
            high = mid - 1; 
        } else {
            low = mid + 1;
        }
    }

    return ceilIndex;
}

int main() {
    int size, x;
    printf("Enter size of sorted array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of sorted array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value x: ");
    scanf("%d", &x);
    int index = findCeilIndex(arr, size, x);
    printf("%d\n", index);
    return 0;
}
