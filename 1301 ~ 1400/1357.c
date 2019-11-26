#include <stdio.h>

int main()
{
    int n = 0, flag = 0;
    scanf("%d", &n);

    int i = 0;
    while (flag ? --i : ++i)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");

        if (i == n)
            flag = 1;
    }
    return 0;
}
