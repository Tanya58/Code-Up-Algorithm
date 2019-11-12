#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int k = 1; k < n; k++)
    {
        double t = sqrt((double)n - k);
        if (t == (int)t)
        {
            printf("%d %.0lf", k, t);
            break;
        }
    }

    return 0;
}