#include <stdio.h>

int main()
{
    int user = 0, com = 0;
    scanf("%d %d", &user, &com);

    if (user == com)
    {
        printf("tie");
    }
    else
    {
        switch (user)
        {
        case 0:
            printf("%s", com == 1 ? "win" : "lose");
            break;
        case 1:
            printf("%s", com == 2 ? "win" : "lose");
            break;
        case 2:
            printf("%s", com == 0 ? "win" : "lose");
            break;
        }
    }

    return 0;
}