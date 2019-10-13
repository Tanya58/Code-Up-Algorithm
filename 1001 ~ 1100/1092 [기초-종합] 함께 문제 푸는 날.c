#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int days = 1;
    scanf("%d %d %d", &a, &b, &c);
    while (days % a != 0 || days % b != 0 || days % c != 0)
        days++;
    printf("%d", days);
    return 0;
}