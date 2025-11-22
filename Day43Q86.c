#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    int palindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }
    if (palindrome)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");
    return 0;
}
