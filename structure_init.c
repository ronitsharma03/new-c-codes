#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee e1, e2, e3; // we don't have to create as number of variables to have different things, we can just create an array of that variable.
    printf("Enter the value of code for e1 ");
    scanf("%d", &e1.code);
    printf("Enter the salary of e1 ");
    scanf("%f", &e1.salary);
    printf("Enter the name of e1 ");
    scanf("%s", e1.name);
    printf("Enter the value of code for e2 ");
    scanf("%d", &e2.code);
    printf("Enter the salary of e2 ");
    scanf("%f", &e2.salary);
    printf("Enter the name of e2 ");
    scanf("%s", e2.name);
    printf("Enter the value of code for e3 ");
    scanf("%d", &e3.code);
    printf("Enter the salary of e3 ");
    scanf("%f", &e3.salary);
    printf("Enter the name of e3 ");
    scanf("%s", e3.name);
    return 0;
}