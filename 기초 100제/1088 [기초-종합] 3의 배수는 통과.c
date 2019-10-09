#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)
            continue;
        printf("%d ", i);
    }
    return 0;
}