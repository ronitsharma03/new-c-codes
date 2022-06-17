#include <stdio.h>
void Table(int *multiTable, int num, int n)
{
    printf("Multiplication table of %d\n", num);
    for (int i = 0; i < n; i++)
    {
        multiTable[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, multiTable[i]);
    }
    printf("************************END*****************************\n");
}
int main()
{
    int multiTable[3][10];
    Table(multiTable[0], 2, 10);
    Table(multiTable[1], 7, 10);
    Table(multiTable[2], 9, 10);
    return 0;
}