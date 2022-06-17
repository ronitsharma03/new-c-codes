#include<stdio.h>
 #include<string.h>
int main(){
    char st1[15] = "C";
    char *st2 = "B";

        int a = strcmp(st1, st2);
        printf("The value of a is %d\n",a);
return 0;
}