#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;

} date;

void display(date d1)
{
    printf("The date is %d/%d/%d\n", d1.date, d1.month, d1.year);
}

int datecmp(date d1, date d2)
{
    //make comparision btw years
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    //make comparision btw months

    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    //make comparision btw dates

    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    // If everything will be same then it will returns 0
    return 0;
}

int main()
{
    date d1 = {18, 7, 2023};
    date d2 = {18, 7, 2023};

    display(d1);
    display(d2);
    int a = datecmp(d1, d2);
    printf("The date comparision function returns: %d\n", a);
    return 0;
}