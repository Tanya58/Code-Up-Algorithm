#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("%s", num < 10 ? "small" : "");
    return 0;
}