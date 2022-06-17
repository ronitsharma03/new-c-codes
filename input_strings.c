#include<stdio.h>
#include<string.h> 
int main(){
    char st1[20];
    char st2[20];
    char c;
    int i = 0;
     printf("Enter the first string : ");
     scanf("%s", st1);

     while (c != '\n')
     {
         fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
     }
     st2[i - 1] = '\0';
     
     printf("The first string is %s\n", st1); 
     printf("The second character by character string is %s\n", st2);


return 0;
}