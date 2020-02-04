int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", j % 2 ? (j + 1) * n - i: j * n + i + 1);            
        }
        printf("\n");
    }
    return 0;
}