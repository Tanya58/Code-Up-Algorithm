#include <stdio.h>

int main()
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year = 0, month = 0;
    scanf("%d %d", &year, &month);

    if (month == 2)
    {
        printf("%d", ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28);
    }
    else
    {
        printf("%d", months[month - 1]);
    }
    return 0;
}
