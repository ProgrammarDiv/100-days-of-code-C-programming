//Print all enum names and integer values using a loop.

#include <stdio.h>

enum role {ADMIN, USER, GUEST};
char* role_names[] = {"ADMIN", "USER", "GUEST"};

int main() {
    for (int i = 0; i < 3; i++) {
        printf("%s = %d\n", role_names[i], i);
    }
    return 0;
}
