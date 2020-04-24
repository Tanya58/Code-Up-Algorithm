#include <stdio.h>
#include <string.h>

int isAlphbet(char k)
{
    return k >= '0' && k <= '9' ? 1 : 0;
}

int main()
{
    char chemical_formula[9] = {0};
    scanf("%s", chemical_formula);

    char chemical = 0;
    int cx = 0, hy = 0;
    for (int i = 0; i < strlen(chemical_formula); i++)
    {
        if (!isAlphbet(chemical_formula[i]))
        {
            chemical = chemical_formula[i];
            continue;
        }

        if (chemical == 'C')
        {
            cx *= 10;
            cx += chemical_formula[i] - '0';
        }
        else if (chemical == 'H')
        {
            hy *= 10;
            hy += chemical_formula[i] - '0';
        }
    }

    int result = cx ? 12 * cx : 12;
    result += hy ? 1 * hy : 1;
    printf("%d", result);

    return 0;
}