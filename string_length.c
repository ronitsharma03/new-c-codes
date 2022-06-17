#include <stdio.h>

int strlength(char *c)
{
    char *ptr = c;
    int l = 0;
    while (*ptr != '\0')
    {

        l++;
        ptr++;
    }
    return l;
}
int main()
{
    char c[50];
    printf("Enter your string = ");
    scanf("%s", c);
    int l = strlength(c);
    printf("The length of the entered string is %d\n", l);

    return 0;
}