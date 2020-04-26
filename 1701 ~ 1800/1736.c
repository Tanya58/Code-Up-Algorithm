#include <stdio.h>

int main()
{
    int input = 0;
    scanf("%d", &input);

    int sec = input % 60;
    int min = input / 60 % 60;
    int hour = input / 60 / 60 % 24;
    int day = input / 60 / 60 / 24;

    printf("%d %d %d %d", day, hour, min, sec);

    return 0;
}