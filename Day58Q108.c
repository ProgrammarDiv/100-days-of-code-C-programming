#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n], answer[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int prefixProduct = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefixProduct;
        prefixProduct *= nums[i];
    }
    int suffixProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffixProduct;
        suffixProduct *= nums[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
