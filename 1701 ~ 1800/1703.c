#include <stdio.h>

int main()
{
    int hour = 0, min = 0, sec = 0;
    scanf("%d", &sec);

    hour = (sec / 60) / 60;
    min = (sec / 60) % 60;
    sec = sec % 60;

    printf("%d %d %d", hour, min, sec);

    return 0;
}