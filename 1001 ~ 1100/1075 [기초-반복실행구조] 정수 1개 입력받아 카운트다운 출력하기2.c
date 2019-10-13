#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    while (num != 0)
    {
        num--;
        printf("%d\n", num);
    }
    return 0;
}