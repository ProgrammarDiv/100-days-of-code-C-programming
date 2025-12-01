//Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    struct Student topStudent;
    float maxMarks;
    int i, index = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    maxMarks = students[0].marks;
    topStudent = students[0];
    for (i = 1; i < 5; i++) {
        if (students[i].marks > maxMarks) {
            maxMarks = students[i].marks;
            topStudent = students[i];
        }
    }
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll No: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);
    return 0;
}
