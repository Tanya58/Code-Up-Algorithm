#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    if (num > 0)
    {
        printf("plus\n");
        if (num % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
    else
    {
        printf("minus\n");
        if (num % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
