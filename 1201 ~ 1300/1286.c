#include <stdio.h>

int main()
{
    int min = 0x7FFFFFFF, max = 0x80000000;
    int num = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
    }
    printf("%d\n%d", max, min);
    return 0;
}