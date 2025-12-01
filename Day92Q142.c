//Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
    return 0;
}
