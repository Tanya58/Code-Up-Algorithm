#include <stdio.h>

int main()
{
    int a = 0, X = 0;
    scanf("%d %d", &a, &X);
    printf("%d", a >> X);
    return 0;
}