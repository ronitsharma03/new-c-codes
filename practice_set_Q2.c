#include <stdio.h>
#include<string.h>

typedef struct vector
{
    int x;
    int y;
}vect;

    vect sumvector(vect v1, vect v2)
    {
        vect result;
        result.x = v1.x + v2.x;
        result.y = v1.y + v2.y;
        return result;
    }

int main()
{
    vect v1, v2,sum;
    v1.x = 5;
    v1.y = 3;
    printf("The value of x dim is %d and y din is %d\n", v1.x, v1.y);

    v2.x = 5;
    v2.y = 9;
    printf("The value of x dim is %d and y din is %d\n", v2.x, v2.y);
    sum = sumvector(v1, v2);
    printf("The sum of X dim is %d and Y dim is %d\n", sum.x, sum.y);
    return 0;
}