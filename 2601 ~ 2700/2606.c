#include <stdio.h>

int main()
{
    int numerator = 0, denominator = 0;
    scanf("%d %d", &numerator, &denominator);

    for (int i = 0; i < 10; i++)
    {
        numerator %= denominator;
        numerator *= 10;
        printf("%d", numerator / denominator);
    }

    return 0;
}