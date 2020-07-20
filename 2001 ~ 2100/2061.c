#include <stdio.h>

int getStory(char type)
{
    switch (type)
    {
    case 'A':
        return 10;
    case 'S':
        return 2;
    case 'O':
        return 1;
    }
    return 0;
}

int main()
{
    char type = 0;
    scanf("%c", &type);

    int size = 0;
    scanf("%d", &size);

    int weight = 0;
    scanf("%d", &weight);

    int money = 0, ballon_price = 0;
    scanf("%d %d", &money, &ballon_price);

    int ballon_power = 0;
    scanf("%d", &ballon_power);

    double calc = (weight * getStory(type)) / (double)ballon_power;
    if (calc > (int)calc)
    {
        calc++;
    }
    int total_price = (size + (int)calc) * ballon_price;
    printf("%s", money < total_price ? "No" : "Yes");

    return 0;
}