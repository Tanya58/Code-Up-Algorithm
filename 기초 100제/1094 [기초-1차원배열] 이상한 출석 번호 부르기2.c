#include <stdio.h>

int main()
{
    int count = 0;
    int number[10000] = {0};

    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d ", &number[i]);
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", number[i]);
    }

    return 0;
}