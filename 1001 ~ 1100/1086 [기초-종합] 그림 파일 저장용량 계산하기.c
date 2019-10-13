#include <stdio.h>

int main()
{
    int width = 0, height = 0, bit = 0;
    double data = 0;
    scanf("%d %d %d", &width, &height, &bit);
    data = (double)(width * height * bit) / 8 / 1024 / 1024;
    printf("%.2lf MB", data);
    return 0;
}