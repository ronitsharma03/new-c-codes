#include<stdio.h>

int main(){
    int n,p=0,k;
    printf("enter a number :");
    scanf("%d",&n);

    while(n!=0){
    p=p*10+n%10;
    n=n/10;
    }
    printf("Digits are : ");
while(p!=0){
k=p%10;
printf("%d  ",k);
p=p/10;
}
printf("\n");
return 0;
}