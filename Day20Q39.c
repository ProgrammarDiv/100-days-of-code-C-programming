#include <stdio.h>

int main() {
    int num, remainder;
    unsigned long long product = 1;
    int foundOdd = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            foundOdd = 1;
        }
        num /= 10;
    }
    if (foundOdd)
        printf("Product of odd digits = %llu\n", product);
    else
        printf("No odd digits found.\n");
    return 0;
}
