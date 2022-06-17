#include<stdio.h>
void find(char st[], char c){

   int count = 0;
   for (int i = 0; st[i] < '\0'; i++)
   {
       if (st[i]==c)
       {
           printf("%d",i);
           count++;
       }
       
   }
   
}
int main(){
    char st[] = "Ronit";
    find(st, 'o');
    
return 0;
}