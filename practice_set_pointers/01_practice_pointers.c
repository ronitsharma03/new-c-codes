#include<stdio.h>
int main(){
    int a = 15;
    int *ptr = &a;
    printf("The value of address of a is %u\n",&a);
    printf("The value of a is %d\n",*ptr);
return 0;
}