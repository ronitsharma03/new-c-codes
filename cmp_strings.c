#include <stdio.h>
#include <string.h>
int main()
{
char str1[100], str2[100];
int ans;
printf("Enter first string: ");
gets(str1);
printf("Enter second string: ");
gets(str2);
ans = strcmp(str1, str2);

if(ans == 0)
{
printf("Both strings are equal.");
}
else
{
printf("strings are not equal");
}

return 0;
}