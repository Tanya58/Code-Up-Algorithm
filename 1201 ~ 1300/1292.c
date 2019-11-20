#include <stdio.h>

int main()
{
    char dna[10] = {0};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &dna[i]);
        sum += dna[i] - '0';
    }

    if (sum % 7 == 4)
    {
        printf("suspect");
    }
    else
    {
        printf("citizen");
    }

    return 0;
}