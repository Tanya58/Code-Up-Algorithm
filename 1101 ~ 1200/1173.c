#include <stdio.h>

int main()
{
    int hour = 0, minute = 0;
    scanf("%d %d", &hour, &minute);
    if (minute - 30 < 0)
        printf("%d %d", hour ? hour - 1 : 23, 60 + minute - 30);
    else
        printf("%d %d", hour, minute - 30);
    return 0;
}