#include<stdio.h>

int main(){
int a[100] = {15,8,20,-4,16,2,1,12,21,-2};
int i, j, k, min, swap;


for ( i = 0; i < 9; i++)
{
    min = 1;
        for ( j = i+1; j < 10; j++)
        {
            if (a[j]<a[min])
            {
                min = j;
            }
        
            if (min!=i)
            {
            swap = a[min];
            a[min] = a[i];
            a[i] = swap;
            }
        } 
}  
         printf("Sorted array is \n");
         for ( k = 0; k < 9; k++)
         {
             printf("%d\n", a[k]);
         }
                   



return 0;
}