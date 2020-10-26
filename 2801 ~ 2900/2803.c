#include <stdio.h>

int diff(int a, int b)
{
    return a > b ? a - b : b - a;
}

int main()
{
    int x1 = 0, y1 = 0, d1 = 0;
    scanf("%d %d %d", &x1, &y1, &d1);

    int x2 = 0, y2 = 0, d2 = 0;
    scanf("%d %d %d", &x2, &y2, &d2);

    int x = diff(x1, x2);
    int y = diff(y1, y2);
    int d = d1 + d2;

    printf("%s", x * x + y * y > d * d ? "not overlapped" : "overlapped");

    return 0;
}