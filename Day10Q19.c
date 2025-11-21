#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the lengths of three sides: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == b && b == c)
        printf("Triangle is Equilateral.\n");
    else if (a == b || b == c || a == c)
        printf("Triangle is Isosceles.\n");
    else
        printf("Triangle is Scalene.\n");
    return 0;
}
