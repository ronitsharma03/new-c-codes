#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    int salary;
    char name[20];
};
void show(struct employee e1)
{
    printf("Code is : %d\n", e1.code);
    printf("Salary is : %d\n", e1.salary);
    printf("Name is : %s\n", e1.name);
    e1.code = 103;  //even if i change the value of any variable here it doesn't reflect changes in the main !
}
int main()
{
    struct employee e1 = {101, 10000, "HP"};
    struct employee *ptr;

    ptr = &e1;
    ptr->code = 102;
    ptr->salary = 1000000;
    strcpy(ptr->name, "Ronit");
    show(e1);
    printf("Code is : %d\n",ptr->code); //It will remain the same !
    return 0;
}