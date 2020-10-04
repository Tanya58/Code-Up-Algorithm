#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int rtn = 1;
    for (int i = 0; i < 4; i++)
    {
        rtn *= n--;
    }
    printf("%d", rtn);
    return 0;
}