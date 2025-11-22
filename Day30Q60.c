#include <stdio.h>

int main() {
    int n, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }
    printf("Positive numbers count = %d\n", positiveCount);
    printf("Negative numbers count = %d\n", negativeCount);
    printf("Zero count = %d\n", zeroCount);
    return 0;
}
