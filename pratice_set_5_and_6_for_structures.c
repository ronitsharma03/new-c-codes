#include <stdio.h>
typedef struct complex
{
    int real;
    int imaginary;

} comp;

void display(comp c)
{
    printf("The value of real part is %d\n", c.real);
    printf("The value of Img part is %d\n", c.imaginary);
}

int main()
{
    comp cnums[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d num : ", i + 1);
        scanf("%d", &cnums[i].real);
        printf("Enter the Img value for %d num : ", i + 1);
        scanf("%d", &cnums[i].imaginary);
    }

    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }

    return 0;
}