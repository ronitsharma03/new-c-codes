#include<stdio.h>
 void table(int *arr, int n,int num){
      printf("Enter the number to print multiplication table :- ");
     scanf("%d",&num);
     
     printf("Multiplication table of %d !\n",num);
    for (int i = 0; i < n; i++)
    {
        arr[i] = num * (i+1);
    }
        for (int i = 0; i < n; i++)
        {
            printf("%d X %d = %d\n",num,i+1,arr[i]);
        }
        

 }
int main(){
    int arr[10][10],n,num;
    n = sizeof(arr)/sizeof(arr[0]);
     int i;
    table(arr[i], n, num);
     
     
    
return 0;
}