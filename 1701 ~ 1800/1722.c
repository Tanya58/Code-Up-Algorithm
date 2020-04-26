#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int x[100] = {0}, y[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    double total_d = 0;
    for (int i = 0; i < n - 1; i++)
    {
        total_d += sqrt(pow(x[i] - x[i + 1], 2) + pow(y[i] - y[i + 1], 2));
    }

    printf("%.2lf", total_d);

    return 0;
}