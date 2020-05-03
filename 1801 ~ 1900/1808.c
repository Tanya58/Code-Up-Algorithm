#include <stdio.h>
#include <string.h>

#define BOTTLE "bottles" : "bottle"

char command[1000];

void code_H()
{
    printf("Hello, world! ");
}

void code_Q()
{
    printf("%s ", command);
}

void code_9()
{
    for (int i = 99; i >= 0; i--)
    {
        if (i > 0)
        {
            printf("%d %s of beer on the wall, %d %s of beer. \n", i, i > 1 ? BOTTLE, i, i > 1 ? BOTTLE);
        }
        else
        {
            printf("No more bottles of beer on the wall, no more bottles of beer. \n");
        }
        if (i > 1)
        {
            printf("Take one down and pass it around, %d %s of beer on the wall. \n", i - 1, i - 1 > 1 ? BOTTLE);
        }
        else if (i > 0)
        {
            printf("Take one down and pass it around, no more bottles of beer on the wall. \n");
        }
        else
        {
            printf("Go to the store and buy some more, 99 bottles of beer on the wall. ");
        }
    }
}

int main()
{
    scanf("%s+", command);

    for (int i = 0; i < strlen(command); i++)
    {
        switch (command[i])
        {
        case 'H':
            code_H();
            break;
        case 'Q':
            code_Q();
            break;
        case '9':
            code_9();
            break;
        default:
            break;
        }
    }
    return 0;
}