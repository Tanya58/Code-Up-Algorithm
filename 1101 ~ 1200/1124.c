#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    scanf("C%dH%d", &x, &y);
    printf("%d", x * 12 + y);
    return 0;
}