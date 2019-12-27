#include <stdio.h>
#include <limits.h>

int main()
{
    int even = INT_MIN;
    int odd = INT_MIN;

    int number[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (number[i] % 2)
        {
            if (odd < number[i])
                odd = number[i];
        }
        else
        {
            if (even < number[i])
                even = number[i];
        }
    }
    if (odd > 0)
        printf("%d ", odd);
    if (even > 0)
        printf("%d ", even);

    return 0;
}