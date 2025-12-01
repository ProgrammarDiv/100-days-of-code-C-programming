//Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee *emp;

    emp = (struct Employee*) malloc(sizeof(struct Employee));
    if (emp == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter employee name: ");
    scanf("%49s", emp->name);
    printf("Enter employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter employee salary: ");
    scanf("%f", &emp->salary);

    printf("Employee Details:\n");
    printf("Name: %s\n", emp->name);
    printf("ID: %d\n", emp->id);
    printf("Salary: %.2f\n", emp->salary);
    free(emp);
    return 0;
}
