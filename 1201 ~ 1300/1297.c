#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int x = n / 4 + 1;
    int size1 = x * (n - 2 * x);
    x--;
    int size2 = x * (n - 2 * x);

    if (size1 > size2)
        x++;
    printf("%d", x);
    return 0;
}
