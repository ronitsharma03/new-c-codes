#include<stdio.h>

int count(int *arr, int n){
    int post_no = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            post_no++;
        }  
         
    }
    return post_no;

}


 void positive(int *arr, int n){
     for (int i = 0; i < n; i++)
     {
        if(arr[i]>0)
        {
            printf("positive numbers are = %d\n",arr[i]);
        }     
     }
 

 }
int main(){

    
    int arr[] = {1,-1,5,7,9,-6,6,-5,-9};
 
    positive(arr, 9);
    printf("Total number of positive numbers are %d\n",count(arr,9));
return 0;
}