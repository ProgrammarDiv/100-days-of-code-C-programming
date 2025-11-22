#include <stdio.h>
#include <string.h>

void reverseWord(char *start, int length) {
    int i = 0, j = length - 1;
    while (i < j) {
        char temp = start[i];
        start[i] = start[j];
        start[j] = temp;
        i++;
        j--;
    }
}
int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int start = 0, length = 0, i = 0;
    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            length++;
        } else {
            if (length > 0) {
                reverseWord(&sentence[start], length);
            }
            length = 0;
            start = i + 1;
        }
        if (sentence[i] == '\0' || sentence[i] == '\n') {
            break;
        }
        i++;
    }
    printf("Sentence after reversing each word:\n%s", sentence);
    return 0;
}
