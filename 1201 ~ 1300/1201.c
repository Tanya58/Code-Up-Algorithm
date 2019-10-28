#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("%s", num > 0 ? "양수" : num < 0 ? "음수" : "0");
    return 0;
}