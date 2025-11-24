#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - k; i++) {
    int max = arr[i];
    for (int j = i + 1; j < i + k; j++) {
      if (arr[j] > max) {
                max = arr[j];
            }
        }
    printf("%d", max);
        if (i != n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
