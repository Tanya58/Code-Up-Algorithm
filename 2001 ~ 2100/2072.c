#include <stdio.h>

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int getDay(int y, int m, int d)
{
    if (m < 3)
    {
        y--;
        m += 12;
    }
    return ((21 * (y / 100)) / 4 + (5 * (y % 100) / 4) + (26 * (m + 1) / 10) + d - 1) % 7;
}

int isLeapYear(int y)
{
    return y % 4 == 0 ? (y % 100 == 0 ? (y % 400 == 0 ? 1 : 0) : 1) : 0;
}

int main()
{
    int y = 0, d = 0;
    scanf("%d %d", &y, &d);

    int day = getDay(y, d, 1);
    printf("CALENDAR %d %d\n", y, d);
    printf("   S   M   T   W   T   F   S");

    int day13 = 0;
    int max_day = d == 2 && isLeapYear(y) ? 29 : months[d - 1];
    for (int i = 0, cnt = 1; cnt <= max_day; i++)
    {
        if (i % 7 == 0)
        {
            printf("\n");
        }
        if (i < day)
        {
            printf("    ");
            continue;
        }
        if (cnt == 13)
        {
            day13 = i % 7;
        }
        printf("%s%d", cnt < 10 ? "   " : "  ", cnt);
        cnt++;
    }
    printf("\n%s", day13 == 5 ? "Oh my god!" : days[day13]);

    return 0;
}
