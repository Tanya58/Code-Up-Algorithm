#include <stdio.h>
#include <string.h>

int main()
{
    int K = 0;
    scanf("%d", &K);

    char letter[21] = {0};
    scanf("%s", letter);

    for (int P = 1; P <= strlen(letter); P++)
    {
        int S = 3 * P + K;
        letter[P - 1] -= S;
        if (letter[P - 1] < 'A')
        {
            letter[P - 1] += 26;
        }
    }

    printf("%s", letter);

    return 0;
}