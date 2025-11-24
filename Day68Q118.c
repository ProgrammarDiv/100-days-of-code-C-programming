#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n - 1], sum = (n * (n - 1)) / 2;
    for (int i = 0; i < n - 1; i++) {
    scanf("%d", &arr[i]);
    sum -= arr[i];
    }
printf("%d\n", sum);
return 0;
}
