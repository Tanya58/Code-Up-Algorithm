#include <stdio.h>

int main()
{
    int age = 0, year = 0;
    scanf("%d", &age);
    year = age - 13;
    printf("%d %d", year > 0 ? 100 - year : -year, year > 0 ? 1 : 3);
    return 0;
}