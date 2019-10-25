#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%s+%s=%s", a % 2 ? "홀수" : "짝수", b % 2 ? "홀수" : "짝수", (a + b) % 2 ? "홀수" : "짝수");
    return 0;
}