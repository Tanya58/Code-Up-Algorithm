#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    for (int i = a % 2 ? a : a + 1; i <= b; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}