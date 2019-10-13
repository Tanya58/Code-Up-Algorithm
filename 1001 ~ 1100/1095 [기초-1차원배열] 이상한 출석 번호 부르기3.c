#include <stdio.h>
#define MAX_NUMBER = 23;

int main()
{
    int min = 23;
    int count = 0;
    int number[10000] = {0};

    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d ", &number[i]);
        if (min > number[i])
            min = number[i];
    }
    printf("%d", min);

    return 0;
}