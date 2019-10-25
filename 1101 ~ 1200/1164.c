#include <stdio.h>

int main()
{
    int h1 = 0, h2 = 0, h3 = 0;
    scanf("%d %d %d", &h1, &h2, &h3);
    printf("%s", h1 <= 170 ? "CRASH" : h2 <= 170 ? "CRASH" : h3 <= 170 ? "CRASH" : "PASS");
    return 0;
}