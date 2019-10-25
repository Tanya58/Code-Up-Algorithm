#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("%s", num % 7 ? "not multiple" : "multiple");
    return 0;
}