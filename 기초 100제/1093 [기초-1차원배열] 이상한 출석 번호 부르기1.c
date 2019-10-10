#include <stdio.h>

int main()
{
    int count = 0;
    int number[23] = {0};
    int tmp = 0;

    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &tmp);
        number[tmp - 1]++;
    }

    for (int i = 0; i < 23; i++)
    {
        printf("%d ", number[i]);
    }

    return 0;
}