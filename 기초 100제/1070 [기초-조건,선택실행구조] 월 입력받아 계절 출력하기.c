#include <stdio.h>

int main()
{
    int month = 0;
    scanf("%d", &month);
    switch (month)
    {
    case 12:
    case 1:
    case 2:
        printf("winter");
        break;
    case 3:
    case 4:
    case 5:
        printf("spring");
        break;
    case 6:
    case 7:
    case 8:
        printf("summer");
        break;
    case 9:
    case 10:
    case 11:
        printf("fall");
        break;
    default:
        break;
    }
    return 0;
}
