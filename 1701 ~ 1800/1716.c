#include <stdio.h>

int main()
{
    int month = 0, day = 0;
    scanf("%d %d", &month, &day);

    int dday = 0;
    for (int i = month; i <= 10; i++)
    {
        dday += i % 2 ? 31 : 30;
    }
    dday -= day;

    printf("%d", dday);

    return 0;
}