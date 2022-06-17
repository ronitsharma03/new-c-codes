#include <stdio.h>
void printadd(int i)
{
    printf("The address of variable of a is %u\n", &i);
}
int main()
{
    int i = 5;
    printf("The value of variable of i is %d\n", i);
    printadd(i);
    printf("The address of variable i is %u\n", &i);
    return 0;
}