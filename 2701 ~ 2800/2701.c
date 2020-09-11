#include <stdio.h>

int f(int a, int b)
{
    int rtn = a - b;
    return rtn > 0 ? rtn : -rtn;
}

int main()
{
    int X = 0;
    scanf("%d", &X);

    int exit[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &exit[i]);
    }

    int min = f(X, exit[0]);
    for (int i = 1; i < 5; i++)
    {
        int rtn = f(X, exit[i]);
        if (min > rtn)
        {
            min = rtn;
        }
    }
    printf("%d", min);

    return 0;
}