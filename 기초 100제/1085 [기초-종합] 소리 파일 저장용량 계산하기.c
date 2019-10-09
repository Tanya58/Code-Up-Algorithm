#include <stdio.h>

int main()
{
    long long h = 0, b = 0, c = 0, s = 0;
    double data = 0;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    data = (double)(h * b * c * s) / 8 / 1024 / 1024;
    printf("%0.1lf MB", data);
    return 0;
}