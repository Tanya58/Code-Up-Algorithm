#include <stdio.h>

int main()
{
    int hour = 0, minute = 0;
    scanf("%d %d", &hour, &minute);
    minute += hour * 60;
    minute -= 30;
    minute += 24 * 60;
    printf("%d %d", (minute / 60) % 24, minute % 60);
    return 0;
}
