#include<stdio.h>
int main (){
    int a = 0,b = 10;
   
    while(a<20){
        a++;
        if(a!=b)
        {
        continue;
        }
        else{
            printf("%d\n",a);
        }
        
    }

    return 0;
}   