#include<stdio.h>
int main(){
    int a,prime = 1,i;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(i = 2;i<a;i++)
    {
       if (a%i==0)
       {
           prime = 0;
           break;
       }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number \n",a);
    }
    else
    {
        printf("%d is a prime number \n",a);
    }
    
return 0;
}