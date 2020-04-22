#include <stdio.h>

int main()
{
    int n[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", n[4 - i]);
    }
    return 0;
}