#include <stdio.h>

int main()
{
    int k = 0;
    int num[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &k);

    printf("%d", num[k - 1]);

    return 0;
}