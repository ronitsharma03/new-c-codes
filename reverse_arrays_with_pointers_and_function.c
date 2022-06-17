#include<stdio.h>
 void reverse (int *arr, int n){
 int swap;
 for (int i = 0; i < (n/2); i++)
 {
    swap = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = swap;
 }
 
 }
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    reverse(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        printf("The value of element %d is %d\n",i,arr[i]);
    }
    
return 0;
}