#include <stdio.h>
int main()
{
int array[100], n, c, a, swap;
printf("Enter number of elements\n");
scanf("%d", &n);
printf("Enter %d integers\n", n);
for (c = 0; c < n; c++)
scanf("%d", &array[c]);
for (c = 0; c < n - 1; c++)
{
for (a = 0; a < n - c - 1; a++)
{
if (array[a] > array[a + 1])
{
swap = array[a];
array[a] = array[a + 1];
array[a + 1] = swap;
}
}
}
printf("Sorted list in ascending order:\n");
for (c = 0; c < n; c++)
printf("%d \n", array[c]);
return 0;
}