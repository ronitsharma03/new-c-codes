#include <stdio.h>
typedef struct time
{
    int hours;
    int minutes;
    int seconds;

}time;

void display(time t1)
{
    printf("The time is %d:%d:%d\n", t1.hours, t1.minutes, t1.seconds);
}

int timecmp(time t1, time t2)
{
    //make comparision btw years
    if (t1.hours > t2.hours)
    {
        return 1;
    }
    if (t1.hours < t2.hours)
    {
        return -1;
    }
    //make comparision btw months

    if (t1.minutes > t2.minutes)
    {
        return 1;
    }
    if (t1.minutes < t2.minutes)
    {
        return -1;
    }
    //make comparision btw dates

    if (t1.seconds > t2.seconds)
    {
        return 1;
    }
    if (t1.seconds < t2.seconds)
    {
        return -1;
    }
    // If everything will be same then it will returns 0
    return 0;
}

int main()
{
    time t1 = {9, 21, 51};
    time t2 = {6, 16, 20};

    display(t1);
    display(t2);
    int a = timecmp(t1, t2);
    printf("The time comparision function returns: %d\n", a);
    return 0;
}