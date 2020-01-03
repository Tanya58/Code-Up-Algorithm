#include <stdio.h>

void sort(int arr[], int arr_len)
{
    int tmp = 0;
    for (int i = 0; i < arr_len - 1; i++)
    {
        for (int j = 0; j < arr_len - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int n = 0, c = 0;
    int students[99] = {0};

    scanf("%d %d", &n, &c);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &students[i]);
    }
    sort(students, n < sizeof(students) ? n : sizeof(students));
    for (int i = 0; i < n; i++)
    {
        printf("%d%c", students[i], (i + 1) % c ? ' ' : '\n');
    }

    return 0;
}