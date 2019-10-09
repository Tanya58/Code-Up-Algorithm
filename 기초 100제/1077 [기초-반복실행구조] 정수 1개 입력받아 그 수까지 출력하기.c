#include <stdio.h>

int main()
{
    int num = 0;
    int i = 0;

    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}