#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    while (num != 0)
    {
        printf("%d\n", num);
        scanf("%d", &num);
    }
    return 0;
}