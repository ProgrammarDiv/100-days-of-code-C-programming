#include <stdio.h>

int main() {
    int n, key, i, pos;
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &key);
    pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
    }
    for (i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = key;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
