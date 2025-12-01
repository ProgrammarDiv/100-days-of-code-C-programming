//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int size) {
    struct Student top = students[0];
    for (int i = 1; i < size; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    return top;
}
int main() {
    struct Student students[3] = {
        {"Alice", 101, 88.5},
        {"Bob", 102, 92.0},
        {"Charlie", 103, 79.5}
    };
    struct Student top = findTopStudent(students, 3);
    printf("Top Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);
    return 0;
}
