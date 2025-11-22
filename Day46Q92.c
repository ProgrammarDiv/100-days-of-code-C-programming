#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }
        char firstRepeat = '\0';
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            firstRepeat = str[i];
            break;
        }
    }
    if (firstRepeat)
        printf("First repeating lowercase alphabet: %c\n", firstRepeat);
    else
        printf("No repeating lowercase alphabet found\n");
    return 0;
}
