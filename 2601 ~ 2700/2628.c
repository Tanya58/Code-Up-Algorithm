#include <stdio.h>

int f(int x, int y, int k)
{
    int small = x < y ? x : y;
    int big = x > y ? x : y;
    return small < k && k < big ? 1 : 0;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int c = 0, d = 0;
    scanf("%d %d", &c, &d);

    printf("%s", f(a, b, c) ^ f(a, b, d) ? "cross" : "not cross");

    return 0;
}