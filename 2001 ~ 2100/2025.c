#include <stdio.h>

int goodDay(int y, int m, int d)
{
    char checkYear[10] = {0};
    char checkMD[10] = {0};

    while (y > 0)
    {
        checkYear[y % 10]++;
        y /= 10;
    }
    checkMD[m / 10]++;
    checkMD[m % 10]++;
    checkMD[d / 10]++;
    checkMD[d % 10]++;

    for (int i = 0; i < 10; i++)
    {
        if (checkYear[i] != checkMD[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int y = 0, m = 0, d = 0;
    scanf("%d/%d/%d", &y, &m, &d);
    printf("%s", goodDay(y, m, d) ? "yes" : "no");
    return 0;
}