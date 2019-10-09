#include <stdio.h>

int main()
{
    int num = 0;
repeat:
    scanf("%d", &num);
    if (num != 0)
    {
        printf("%d\n", num);
        goto repeat;
    }
    return 0;
}