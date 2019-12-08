#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int data[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", data[i]);
    }

    return 0;
}