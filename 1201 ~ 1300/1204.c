#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    if (num / 10 == 1)
        printf("%dth", num);
    else
        printf("%d%s", num, num % 10 == 1 ? "st" : num % 10 == 2 ? "nd" : num % 10 == 3 ? "rd" : "th");
    return 0;
}