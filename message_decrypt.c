#include<stdio.h>
 void decrypt(char *st){
     char *ptr = st;
     while (*ptr!='\0')
     {
         *ptr = *ptr-1;
         ptr++;
     }
     
 }
int main(){
    char st[] = "Epo(u!mppl!bu!uijt!nfttbhf";
    decrypt(st);
    printf("%s\n",st);
return 0;
}