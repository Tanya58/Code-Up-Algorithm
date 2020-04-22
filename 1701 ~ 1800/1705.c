#include <stdio.h>

int counter(int n)
{
    int count = 0;
    if (n / 100 % 10 == 3 || n / 100 % 10 == 6 || n / 100 % 10 == 9)
    {
        count++;
    }
    if (n / 10 % 10 == 3 || n / 10 % 10 == 6 || n / 10 % 10 == 9)
    {
        count++;
    }
    if (n / 1 % 10 == 3 || n / 1 % 10 == 6 || n / 1 % 10 == 9)
    {
        count++;
    }
    return count;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    switch (counter(n))
    {
    case 1:
        printf("K");
        break;
    case 2:
        printf("KK");
        break;
    case 3:
        printf("KKK");
        break;
    default:
        printf("%d", n);
        break;
    }

    return 0;
}