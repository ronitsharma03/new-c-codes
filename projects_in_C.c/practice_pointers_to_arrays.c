#include<stdio.h>
 
int main(){
    int arr[10];
    int *ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("These addresses to the same address !\n");

    }
    else
    {
         printf("These do not addresses to the same address !\n");
    }
    

return 0;
}