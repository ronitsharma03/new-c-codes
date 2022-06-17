#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int a, b;
    printf("Enter the numbers to swap : ");
    scanf("%d %d",&a, &b);
    printf("The value of a and b before swapping is %d and %d\n", a, b);   
        //wrong_swap(a, b); // This will not work because here we are using call by value function which only copies the value of a and b
    swap(&a, &b);     // This will work because here we are using call by reference which provides the address to the values of a and b
    printf("The value of a and b after swapping is %d and %d\n", a, b);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}