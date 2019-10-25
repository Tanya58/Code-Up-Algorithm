#include <stdio.h>

int main()
{
    int week = 0;
    scanf("%d", &week);
    switch (week)
    {
    case 1:
    case 3:
    case 5:
    case 7:
        printf("oh my god");
        break;
    default:
        printf("enjoy");
        break;
    }
    return 0;
}