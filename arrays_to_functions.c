#include<stdio.h>
 void prArray(int *ptr, int n){
     for(int i = 0;i<n;i++)
     {
        printf("The value of element %d is %d \n",i+1,*ptr++);
     }
 }
int main(){
    int arr[] = {3,9,8,10,55,587,24,0};
    prArray(arr, 8);
return 0;
}