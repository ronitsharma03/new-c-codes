#include<stdio.h>
 struct facebook{
     int code;
     int salary;
     char name[20];

 };
int main(){
    struct facebook e1 = {100, 20000, "HP"};
    printf("code is : %d\n",e1.code);
    printf("Salary is : %d\n",e1.salary);
    printf("Name is : %s\n",e1.name);

return 0;
}