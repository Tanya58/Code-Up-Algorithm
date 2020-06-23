#include <stdio.h>

int conway[10000];

void init(int n)
{
    conway[0] = 1;
    conway[1] = 1;

    int t = 0;
    int end = 1;
    for (int i = 2; i < n; i++)
    {
        t = conway[end] - 1;
        conway[end + 1] = conway[t] + conway[end - t];
        end++;
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    init(n);
    printf("%d", conway[n - 1]);
    return 0;
}