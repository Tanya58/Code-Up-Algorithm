#include <stdio.h>

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

int main()
{
    int n = 0, y = 0, m = 0, d = 0;
    scanf("%d %d %d %d", &n, &y, &m, &d);

    puts("\"Mathemagic!\"");
    printf("%d\n", n * n);

    printf("%s", days[getDay(y, m, d)]);

    return 0;
}
