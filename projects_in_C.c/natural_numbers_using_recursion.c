#include <stdio.h>
int natural(int n);
int main()
{
    int n = 1;
    printf("First natural numbers are \n");
    natural(n);
    printf("\n");

    return 0;
}
int natural(int n)
{

    if (n <= 50)
    {
        printf("%d\t", n);
        natural(n + 1);
    }
}