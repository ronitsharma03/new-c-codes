#include<stdio.h>
int main(){
    int i = 9;
    int *j = &i;    // By using *j = &i, j will now store the address of i.
    printf("The value of i is : %d\n", i);    // For printing the value of i
      printf("The value of i is : %d\n", *j);   // For printing the value of i
        printf("The value of address of i is : %u\n", &i);    // For printing the address of i
          printf("The value of address of i is : %u\n", j);   // For printing the address of i 
          printf("The value of address of j is : %u\n", &j);    // For printing the address of j
          printf("The value of j is : %u\n", *(&j));    // For printing the value j
return 0;
}