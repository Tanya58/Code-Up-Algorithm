#include <stdio.h>
#include <string.h>

double getAtomics(char *formula)
{
    int pos = 0;
    double atomics = 0;
    while (pos < strlen(formula))
    {
        double tmp = 0;
        switch (formula[pos])
        {
        case 'H':
            switch (formula[pos + 1])
            {
            case 'e':
                tmp = 4;
                pos++;
                break;
            default:
                tmp = 1;
                break;
            }
            break;
        case 'B':
            tmp = 10.8;
            break;
        case 'C':
            switch (formula[pos + 1])
            {
            case 'l':
                tmp = 35.5;
                pos++;
                break;
            default:
                tmp = 12;
                break;
            }
            break;
        case 'N':
            switch (formula[pos + 1])
            {
            case 'e':
                tmp = 20.2;
                pos++;
                break;
            case 'a':
                tmp = 23;
                pos++;
                break;
            default:
                tmp = 14;
                break;
            }
            break;
        case 'O':
            tmp = 16;
            break;
        case 'F':
            tmp = 19;
            break;
        case 'P':
            tmp = 31;
            break;
        case 'S':
            tmp = 32;
            break;
        case 'K':
            tmp = 39.1;
            break;
        }
        pos++;

        int cnt = 0;
        while (formula[pos] >= '0' && formula[pos] <= '9')
        {
            cnt += formula[pos] - '0';
            cnt *= 10;
            pos++;
        }
        cnt = cnt ? cnt / 10 : 1;
        atomics += tmp * cnt;
    }
    return atomics;
}

int main()
{
    char formula[16] = {0};
    scanf("%s", formula);
    printf("%lg", getAtomics(formula));
    return 0;
}