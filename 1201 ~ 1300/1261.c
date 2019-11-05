#include <stdio.h>

int main()
{
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n % 5 == 0)
        {
            printf("%d", n);
            return 0;
        }
    }
    printf("0");
    return 0;
}