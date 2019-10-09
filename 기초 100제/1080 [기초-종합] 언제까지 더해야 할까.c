#include <stdio.h>

int main()
{
    int i = 1;
    int num = 0, sum = 0;

    scanf("%d", &num);
    while (sum + i < num)
    {
        sum += i;
        i++;
    }
    printf("%d", i);
    return 0;
}
