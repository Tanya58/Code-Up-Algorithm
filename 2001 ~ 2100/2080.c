#include <stdio.h>

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)

int getDays(int y, int m, int d)
{
    int rtn = 0;
    for (int i = 1; i < y; i++)
    {
        rtn += ((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0) ? 366 : 365;
    }
    for (int i = 1; i < m; i++)
    {
        rtn += months[i - 1];
        if (i == 2 && (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)))
        {
            rtn++;
        }
    }
    return rtn + d;
}

int main()
{
    int y1 = 0, m1 = 0, d1 = 0;
    int y2 = 0, m2 = 0, d2 = 0;
    scanf("%d %d %d", &y1, &m1, &d1);
    scanf("%d %d %d", &y2, &m2, &d2);

    int dday = getDays(y1, m1, d1) - getDays(y2, m2, d2);

    if (dday)
    {
        printf("D%+d", dday);
    }
    else
    {
        printf("D-day");
    }

    return 0;
}