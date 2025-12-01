//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    int sum = 0;
    int count = 0;
    float average;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count > 0) {
        average = (float)sum / count;
        printf("Sum: %d\nAverage: %.2f\n", sum, average);
    } else {
        printf("No numbers found in file.\n");
    }
    return 0;
}
