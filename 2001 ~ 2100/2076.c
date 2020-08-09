#include <stdio.h>

int main()
{
    int pitch[21] = {0};
    for (int f = 0; f < 9; f++)
    {
        scanf("%d", &pitch[f * 2]);
        if (pitch[f * 2] != 10)
        {
            scanf("%d", &pitch[f * 2 + 1]);
        }
    }
    scanf("%d", &pitch[18]);
    scanf("%d", &pitch[19]);
    if (pitch[18] + pitch[19] >= 10)
    {
        scanf("%d", &pitch[20]);
    }

    int score[10] = {0};
    for (int f = 0; f < 9; f++)
    {
        int cf = f * 2;
        int nf = (f + 1) * 2;

        score[f] = pitch[cf] + pitch[cf + 1];

        if (pitch[cf] == 10)
        {
            score[f] += pitch[nf];
            score[f] += f == 8 || pitch[nf] != 10 ? pitch[nf + 1] : pitch[nf + 2];
        }
        else if (pitch[cf] + pitch[cf + 1] == 10)
        {
            score[f] += pitch[nf];
        }
    }
    score[9] = pitch[18] + pitch[19] + pitch[20];

    int total = 0;
    for (int f = 0; f < 10; f++)
    {
        total += score[f];
    }
    printf("%d", total);

    return 0;
}
