#include <stdio.h>

int main()
{
    int num = 0, sum = 0;
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}