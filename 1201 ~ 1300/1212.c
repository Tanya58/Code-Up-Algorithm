#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%s", a < b + c && b < a + c && c < a + b ? "yes" : "no");
    return 0;
}