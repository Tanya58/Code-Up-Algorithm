#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
        {
            printf("정삼각형");
        }
        else if (a * a + b * b == c * c)
        {
            printf("직각삼각형");
        }
        else if (a == b || b == c || c == a)
        {
            printf("이등변삼각형");
        }
        else
        {
            printf("삼각형");
        }
    }
    else
    {
        printf("삼각형아님");
    }
    return 0;
}