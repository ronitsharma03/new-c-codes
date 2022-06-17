#include<stdio.h>
 int occurence(char st[], char b){
     int count =0;
     char *ptr = st;
     while (*ptr!='\0')
     {
         if (*ptr==b)
         {
            count++;
         }
         ptr++;
         
     }
     return count;
 }
int main(){
    char st[50];
    char b;
    printf("Enter the string : ");
    gets(st);
    printf("Enter the alphabet to find occurence : ");
    scanf("%c",&b);
    char *a = &b;
   // char st[] = "Ronit Sharma";
   int count =  occurence(st, b);
    printf("Occurence = %d\n",count);
return 0;
}