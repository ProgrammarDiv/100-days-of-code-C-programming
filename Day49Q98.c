#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[1000];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int len = strlen(name);
    int i = 0;
    while (i < len) {
        if (i == 0 && isalpha(name[i])) {
            printf("%c. ", toupper(name[i]));

            while (i < len && name[i] != ' ') i++;
        } else if (name[i] == ' ') {
            int j = i + 1;
            int nextSpace = j;
            while (nextSpace < len && name[nextSpace] != ' ') nextSpace++;
                        if (nextSpace == len || name[nextSpace] == '\0') {
               
                printf("%s", &name[j]);
                break;
            } else if (isalpha(name[j])) {
                printf("%c. ", toupper(name[j]));
            }
            i = nextSpace;
        } else {
            i++;
        }
    }
    printf("\n");
    return 0;
}
