#include <stdio.h>

int main()
{
    int n = 0, cnt = 0;
    int brain[2] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        cnt += brain[0] == n || brain[1] == n ? 1 : 0;
        if (brain[1] != n)
        {
            brain[0] = brain[1];
            brain[1] = n;
        }
    }
    printf("%d", cnt);

    return 0;
}