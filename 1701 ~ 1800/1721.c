#include <stdio.h>
#include <math.h>

int main()
{
    int x1 = 0, y1 = 0;
    scanf("%d %d", &x1, &y1);

    int x2 = 0, y2 = 0;
    scanf("%d %d", &x2, &y2);

    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%.2lf", d);

    return 0;
}