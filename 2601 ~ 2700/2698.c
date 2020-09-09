#include <stdio.h>

int hanoi(int n, char from, char by, char to)
{
    int cnt = 2;
    if (n == 1)
    {
        printf("%d : %c->%c\n", n, from, by);
        printf("%d : %c->%c\n", n, by, to);
    }
    else
    {
        cnt += hanoi(n - 1, from, by, to);
        printf("%d : %c->%c\n", n, from, by);
        cnt += hanoi(n - 1, to, by, from);
        printf("%d : %c->%c\n", n, by, to);
        cnt += hanoi(n - 1, from, by, to);
    }
    return cnt;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", hanoi(n, 'A', 'B', 'C'));
    return 0;
}
