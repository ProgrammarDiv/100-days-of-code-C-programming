//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    struct Employee *ptr = &emp;

    printf("Enter employee name: ");
    scanf("%49s", ptr->name);
    printf("Enter employee ID: ");
    scanf("%d", &ptr->id);
    printf("Enter employee salary: ");
    scanf("%f", &ptr->salary);

    printf("Modified Employee Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
