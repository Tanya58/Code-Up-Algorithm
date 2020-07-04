#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int x = n;
    while (x / n == 1)
    {
        printf("%s%d", x == n ? "{" : ", ", x);
        x++;
    }
    printf("}");

    return 0;
}