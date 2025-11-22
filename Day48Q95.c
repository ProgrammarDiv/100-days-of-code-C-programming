#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2 || len1 == 0) {
        return 0;
    }
    char temp[2 * len1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2) != NULL) {
        return 1;
    }
    return 0;
}
int main() {
    char s1[1000], s2[1000];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    if (isRotation(s1, s2)) {
        printf("The second string is a rotation of the first\n");
    } else {
        printf("The second string is NOT a rotation of the first\n");
    }
    return 0;
}
