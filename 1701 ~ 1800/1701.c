#include <stdio.h>

int main()
{
    int num[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 2; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }

    return 0;
}