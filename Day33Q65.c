#include <stdio.h>

int main() {
    int n, key, left, right, mid, found = 0;
    printf("Enter number of elements (sorted array): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == key) {
            found = 1;
            printf("%d found at position %d\n", key, mid + 1);
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (!found)
        printf("%d not found in the array\n", key);
    return 0;
}
