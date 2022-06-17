#include<stdio.h>
 struct employee
 {
     int code;
     int salary;
     char name[20];
 };
int main(){
   struct employee e1;
   struct employee *ptr;

   ptr = &e1;
//    (*ptr).code = 101;
        //e1.code = 101;
        ptr->code = 101;    //you can declare it in any of the mentioned ways!
//    printf("Code is : %d\n",(*ptr).code);    // you can choose any way of accessing it!
//    printf("Code is : %d\n",e1.code); 
   printf("Code is : %d\n",ptr->code); 
return 0;
}