#include <stdio.h>

int main()
{
    int celsius = 0;
    double fahrenheit = 0;
    scanf("%d", &celsius);

    fahrenheit = celsius * (9.0 / 5) + 32;
    printf("%.3lf", fahrenheit);

    return 0;
}