#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, firstDigit, lastDigit, numDigits;
    int powTen;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    numDigits = 0;
    while (temp != 0) {
        lastDigit = temp % 10;
        temp /= 10;
        numDigits++;
    }
    firstDigit = num / pow(10, numDigits - 1);
    int middlePart = (num % (int)pow(10, numDigits - 1)) / 10;
    int swappedNum = firstDigit * (int)pow(10, numDigits - 1) + middlePart * 10 + lastDigit;
    printf("Number after swapping first and last digits: %d\n", swappedNum);
    return 0;
}
