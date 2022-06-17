#include <stdio.h>
#include <string.h>

typedef struct timestamp
{
    int year, months, date, hours, minutes, seconds;

} datetime;

void display(datetime tstamp1, datetime tstamp2)
{
    printf("The first timestamp is %d/%d/%d-%d:%d:%d\n", tstamp1.year, tstamp1.months, tstamp1.date, tstamp1.hours, tstamp1.minutes, tstamp1.seconds);

    printf("The second timestamp is %d/%d/%d-%d:%d:%d\n", tstamp2.year, tstamp2.months, tstamp2.date, tstamp2.hours, tstamp2.minutes, tstamp2.seconds);
}

int tstampcmp(datetime tstamp1, datetime tstamp2)
{
    if (tstamp1.year > tstamp2.year)
    {
        return 1;
    }
    if (tstamp1.year < tstamp2.year)
    {
        return -1;
    }
    if (tstamp1.months > tstamp2.months)
    {
        return 1;
    }
    if (tstamp1.months < tstamp2.months)
    {
        return -1;
    }
    if (tstamp1.date > tstamp2.date)
    {
        return 1;
    }
    if (tstamp1.date < tstamp2.date)
    {
        return -1;
    }
    if (tstamp1.hours > tstamp2.hours)
    {
        return 1;
    }
    if (tstamp1.hours < tstamp2.hours)
    {
        return -1;
    }
    if (tstamp1.minutes > tstamp2.minutes)
    {
        return 1;
    }
    if (tstamp1.minutes < tstamp2.minutes)
    {
        return -1;
    }
    if (tstamp1.seconds > tstamp2.seconds)
    {
        return 1;
    }
    if (tstamp1.seconds < tstamp2.seconds)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    datetime tstamp1 = {2022, 8, 14, 8, 15, 39};

    datetime tstamp2 = {2021, 5, 24, 13, 18, 31};

    display(tstamp1, tstamp2);
    int a = tstampcmp(tstamp1, tstamp2);

    printf("The Timestamp comparision function returns %d\n", a);

    return 0;
}