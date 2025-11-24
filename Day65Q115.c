#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};
    int i;
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }
    for (i = 0; s[i] != '\0'; i++) {
   freq[s[i] - 'a']++;
    }
    for (i = 0; t[i] != '\0'; i++) {
    freq[t[i] - 'a']--;
    }
    for (i = 0; i < 26; i++) {
    if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}
