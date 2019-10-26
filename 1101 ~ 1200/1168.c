#include <stdio.h>

int main()
{
    int ssn = 0, gender = 0;
    scanf("%d %d", &ssn, &gender);
    printf("%d", gender < 3 ? 112 - (ssn / 10000) + 1 : 12 - (ssn / 10000) + 1);
    return 0;
}