#include <stdio.h>

int main()
{
    int *ptr;
    int marks[4];
    
    // ptr = &marks[0];
    ptr = marks; //Both ways can be used in order to access arrays with pointers.
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of marks of student %d : ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks of student %d is %d\n", i + 1, marks[i]);
    }

    return 0;
}