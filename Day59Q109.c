#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    int maxSum = currentSum;
    for (int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    printf("%d\n", maxSum);
    return 0;
}
