#include <stdio.h>

int main()
{
    char digit[10] = {0};
    scanf("%10s", digit);

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += digit[i] - '0';
    }

    printf("%s", sum % 7 == 4 ? "Bad" : "Good");

    return 0;
}