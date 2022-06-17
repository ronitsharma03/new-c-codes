#include <stdio.h>
#include <string.h>

typedef struct employee //use typedef here while defining structures!
{
    int code;
    int salary;
    char name[20];
}emp;   //Don't forget to declare it here!
void show(emp e1)
{
    printf("Code is : %d\n", e1.code);
    printf("Salary is : %d\n", e1.salary);
    printf("Name is : %s\n", e1.name);
}
int main()
{
    emp e1 = {101, 10000, "HP"};    //Now you can get rid of typing the structure whole everywher you need to write!
    emp *ptr;   //you can simply write which u have declared it at typedef! 

    ptr = &e1;
    ptr->code = 102;
    ptr->salary = 1000000;
    strcpy(ptr->name, "Ronit");
    show(e1);
    
    return 0; 
}