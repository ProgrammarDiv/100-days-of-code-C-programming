#include <stdio.h>

int main() {
    int num, temp, i = 0;
    int binary[32];
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }
    temp = num;
    while (temp > 0) {
        binary[i] = temp % 2;
        temp /= 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}
