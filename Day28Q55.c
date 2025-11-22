#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool isPrime;

    printf("Enter the limit n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        isPrime = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
