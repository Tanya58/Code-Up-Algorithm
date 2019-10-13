#include <stdio.h>

int main()
{
    int year = 0, month = 0, day = 0;
    scanf("%d.%d.%d", &year, &month, &day);
    printf("%04d.%02d.%02d", year, month, day);
    return 0;
}