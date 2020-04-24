#include <stdio.h>

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int numerator = 0;   // 분자, 기수(cardinal)
    int denominator = 0; // 분모, 서수(ordinal)
    scanf("%d %d", &numerator, &denominator);

    int g = gcd(numerator, denominator);
    printf("%d %d", numerator / g, denominator / g);

    return 0;
}