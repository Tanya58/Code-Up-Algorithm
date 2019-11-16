#include <stdio.h>

int nPr(int n, int r)
{
    int result = 1;
    for (int i = n; i > (r ? n - r : 0); i--)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n = 0, r = 0;
    scanf("%d %d", &n, &r);
    printf("%d", nPr(n, r) / nPr(r, 0));
    return 0;
}
