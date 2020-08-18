#include <stdio.h>

int main()
{
    char R[7] = {0};
    scanf("0.%s", R);

    int numerator = 0, denominator = 1;
    for (int i = 0; R[i]; i++)
    {
        denominator *= 10;
        numerator *= 10;
        numerator += R[i] - '0';
    }

    for (int i = 2; i <= numerator; i++)
    {
        while (numerator % i == 0 && denominator % i == 0)
        {
            numerator /= i;
            denominator /= i;
        }
    }

    printf("%d %d\n", numerator, denominator);

    return 0;
}