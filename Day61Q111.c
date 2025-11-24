#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - k; i++) {
        int foundNegative = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                foundNegative = 1;
                break;
            }
        }
        if (!foundNegative) {
            printf("0");
        }
        if (i != n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
