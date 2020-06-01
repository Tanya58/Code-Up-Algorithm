#include <stdio.h>

int is369(int k)
{
    int count = 0;
    while (k > 0)
    {
        int m = k % 10;
        if (m == 3 || m == 6 || m == 9)
        {
            count++;
        }
        k /= 10;
    }
    return count;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        int t = is369(i);
        if (t)
        {
            for (int j = 0; j < t; j++)
            {
                printf("K");
            }
        }
        else
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}