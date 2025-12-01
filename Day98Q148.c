//Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int areEqual(struct Employee e1, struct Employee e2) {
    return (strcmp(e1.name, e2.name) == 0) && (e1.id == e2.id) && (e1.salary == e2.salary);
}

int main() {
    struct Employee emp1, emp2;

    printf("Enter details for employee 1:\n");
    printf("Name: ");
    scanf("%49s", emp1.name);
    printf("ID: ");
    scanf("%d", &emp1.id);
    printf("Salary: ");
    scanf("%f", &emp1.salary);

    printf("Enter details for employee 2:\n");
    printf("Name: ");
    scanf("%49s", emp2.name);
    printf("ID: ");
    scanf("%d", &emp2.id);
    printf("Salary: ");
    scanf("%f", &emp2.salary);

    if (areEqual(emp1, emp2)) {
        printf("The two employees are identical.\n");
    } else {
        printf("The two employees are not identical.\n");
    }
    return 0;
}
