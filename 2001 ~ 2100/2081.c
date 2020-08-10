#include <stdio.h>

int main()
{
    int n[9] = {0};
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &n[i]);
    }

    int max = 0;
    for (int i = 1; i < 9; i++)
    {
        if (n[max] < n[i])
        {
            max = i;
        }
    }
    printf("%d\n%d", n[max], max + 1);

    return 0;
}