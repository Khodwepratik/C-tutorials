//Structure creating program

//struct :Keyword


#include<stdio.h>
#include<string.h> // Include the string.h header for strcpy function

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    // Initializing structure members
    struct Employee e1 = {1, "Prateek", 25000.50};
    printf("%d\t%s\t%f\n", e1.id, e1.name, e1.salary);

    // Accepting user values for e2
    struct Employee e2;
    printf("Enter the id, name, and salary for e2: \n");
    scanf("%d %s %f", &e2.id, e2.name, &e2.salary);

    // Displaying user-entered values for e2
    printf("User entered values for e2: %d\t%s\t%f\n", e2.id, e2.name, e2.salary);

    // Accepting user values for e3
    struct Employee e3;
    printf("Enter id, name, and salary for e3: \n");
    scanf("%d %s %f", &e3.id, e3.name, &e3.salary);

    // Displaying user-entered values for e3
    printf("User entered values for e3: %d\t%s\t%f\n", e3.id, e3.name, e3.salary);

    // Initializing structure members for e4
    struct Employee e4;
    e4.id = 4;
    strcpy(e4.name, "Ayesha");
    e4.salary = 23000.25;

    // Displaying values for e4
    printf("Values for e4: ID = %d\t Name = %s\t Salary = %f\n", e4.id, e4.name, e4.salary);

    return 0;
}
