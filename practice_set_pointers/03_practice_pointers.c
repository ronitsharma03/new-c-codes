#include<stdio.h>
void printtimes(int a){
    printf("The value of i after ten times is %d\n",a);
}
int main(){
    int i = 4;
    printf("The value of variable i is %d\n",i);
    printtimes(i*10);
return 0;
}