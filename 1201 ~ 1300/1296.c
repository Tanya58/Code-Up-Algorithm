#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int len = n / 2;
    printf("%d", (len / 2) * (len - len / 2));

    return 0;
}