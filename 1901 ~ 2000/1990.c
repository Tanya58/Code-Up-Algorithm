#include <stdio.h>

int main()
{
    int n = 0;
    int sum = 0;
    while (scanf("%1d", &n) != EOF)
    {
        sum += n;
        if (sum % 3 == 0)
        {
            sum = 0;
        }
    }
    printf("%d", sum ? 0 : 1);
    return 0;
}