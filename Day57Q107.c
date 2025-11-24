#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], prevGreater[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        prevGreater[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater[i] = arr[j];
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d", prevGreater[i]);
        if (i != n - 1) {
            printf(",");
        }
    }
    printf("\n");
    return 0;
}
