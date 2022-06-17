#include <stdio.h>
#include<string.h>

struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1, v2;
    v1.x = 55;
    v1.y = 43;
    printf("The value of x dim is %d and y din is %d\n", v1.x, v1.y);

    v2.x = 51;
    v2.y = 509;
    printf("The value of x dim is %d and y din is %d\n", v2.x, v2.y);

    return 0;
}