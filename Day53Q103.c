#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }
    printf("-1\n");
    return 0;
}
