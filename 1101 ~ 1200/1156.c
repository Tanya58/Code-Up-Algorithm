#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("%s", num % 2 ? "odd" : "even");
    return 0;
}