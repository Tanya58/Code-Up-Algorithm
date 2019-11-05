#include <stdio.h>

int main()
{
    int n = 0, number = 0, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}