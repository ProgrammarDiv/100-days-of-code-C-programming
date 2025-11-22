#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    printf("All substrings:\n");
    for (int i = 0; i < length; i++) {
        for (int j = 1; j <= length - i; j++) {
            for (int k = i; k < i + j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
