#include<stdio.h>
int main(){
    int a = 400;
    int *ptr = &a;
    int **ptr_ptr = &ptr;
    printf("The value of i is %d\n",**ptr_ptr);
return 0;
}