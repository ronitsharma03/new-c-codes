#include<stdio.h>
struct student
{
    int marks;
    float roll_no;
    char name;
};
union employee
{
    float id;
    int salary;
    char name[2];
};

int main(){
struct student s1 = {25, 58, 'H'};
int *ptr = &s1.marks;
int *pttr = &s1.name;
int *ptrr = &s1.roll_no;
printf("The size of marks = %d\n",sizeof(s1.marks));
printf("The size of structure is = %d\n",sizeof(s1));
printf("The address of marks of student 1 = %u \n",&s1.marks);
printf("The address of roll no of student 1 = %u \n",&s1.roll_no);
printf("The address of name of student 1 = %u \n",&s1.name);
printf("***********---------------------****************\n FOR UNION \n\n");


union employee e1 = {25, 58000, "HP"};
int *ptrs = &e1.id;
int *pttrs = &e1.salary;
int *ptrrs = &e1.name;
printf("The size of Union is = %d\n",sizeof(e1));
printf("The address of id of employee 1 = %u \n",&e1.id);
printf("The address of salary of employee 1 = %u \n",&e1.salary);
printf("The address of name of employee 1 = %u \n",&e1.name);

return 0;
}