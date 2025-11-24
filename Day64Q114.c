#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}
int lengthOfLongestSubstring(char s[]) {
    int n = strlen(s);
    int lastIndex[256];
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }    int maxLen = 0, start = 0;
    for (int i = 0; i < n; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;   }
        lastIndex[(unsigned char)s[i]] = i;
    maxLen = max(maxLen, i - start + 1);
    }
    return maxLen;
}
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("%d\n", lengthOfLongestSubstring(s));
    return 0;
}
