#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    int day = (a - c) / (b - c);
    while (day * (b - c) + c < a)
    {
        day++;
    }
    printf("%d", day);
    return 0;
}