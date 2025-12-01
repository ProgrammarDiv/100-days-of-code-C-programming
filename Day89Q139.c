//Show that enums store integers by printing assigned values.

#include <stdio.h>

enum colors {RED, GREEN, BLUE};

int main() {
    enum colors c1 = RED;
    enum colors c2 = GREEN;
    enum colors c3 = BLUE;
    printf("RED = %d\n", c1);
    printf("GREEN = %d\n", c2);
    printf("BLUE = %d\n", c3);
    return 0;
}
