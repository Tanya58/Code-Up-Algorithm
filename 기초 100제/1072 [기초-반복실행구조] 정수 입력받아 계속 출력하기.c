#include <stdio.h>

int main()
{
    int count = 0, loop = 0;
    int num = 0;

    scanf("%d", &count);
repeat:
    scanf("%d", &num);
    printf("%d\n", num);
    loop++;
    if (loop < count)
        goto repeat;
    return 0;
}