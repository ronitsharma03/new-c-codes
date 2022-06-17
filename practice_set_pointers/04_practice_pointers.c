#include <stdio.h>
void sum_avg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main()
{
    int a = 6, b = 9, sum;
    float avg;
    sum_avg(a, b, &sum, &avg);
    printf("The sum = %d\nThe average = %.2f\n", sum, avg);
    return 0;
}