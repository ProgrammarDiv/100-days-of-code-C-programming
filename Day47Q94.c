#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int maxLen = 0, maxStart = 0;
    int length = 0, start = 0;
    int i = 0;
    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            length++;
        } else {
            if (length > maxLen) {
                maxLen = length;
                maxStart = start;
            }
            length = 0;
            start = i + 1;
        }
        if (sentence[i] == '\0' || sentence[i] == '\n') {
            break;
        }
        i++;
    }
    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", sentence[i]);
    }
    printf("\n");
    return 0;
}
