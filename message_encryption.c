#include<stdio.h>
 void encrypt(char *st){
     char *ptr = st;
     while (*ptr!= '\0')
     {
        *ptr+=1;
        ptr++;
     }
     
 }
int main(){
    char st[] = "Don't look at this message";
    encrypt(st);
    printf("%s\n",st);
return 0;
}