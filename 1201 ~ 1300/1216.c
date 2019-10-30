#include <stdio.h>

int main()
{
    int no_ad_income = 0, ad_income = 0, cost = 0;
    scanf("%d %d %d", &no_ad_income, &ad_income, &cost);

    if (no_ad_income < ad_income - cost)
    {
        printf("advertise");
    }
    else if (no_ad_income > ad_income - cost)
    {
        printf("do not advertise");
    }
    else
    {
        printf("does not matter");
    }
    return 0;
}