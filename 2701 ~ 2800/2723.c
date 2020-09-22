#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int rtn = 0;
    for (int i = 2; i <= n; i++)
    {
        rtn += 3 * i;
        rtn %= 1000000004;
    }
    rtn += n + 4;
    printf("%d", rtn % 1000000004);

    return 0;
}
