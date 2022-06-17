#include <stdio.h>

int main()
{
    char str[] = {'R','O','N','I','T','\0'}; //char str[] = "Ronit";
    // printf("%s\n",str);
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}
