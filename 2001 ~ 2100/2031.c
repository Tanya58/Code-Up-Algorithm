#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[7] = {0};
    scanf("%s", alphabet);

    int n = 0;
    for (int i = strlen(alphabet) - 1, t = 1; i >= 0; i--, t *= 26)
    {
        n += t * (alphabet[i] - 'A' + 1);
    }
    printf("%d", n);

    return 0;
}
