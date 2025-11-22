#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    return 0;
}
