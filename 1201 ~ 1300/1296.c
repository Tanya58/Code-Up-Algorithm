#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    float half = (float)n / 2;
    printf("%d", (int)(half / 2 * (half - half / 2)));

    return 0;
}