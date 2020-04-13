#include <stdio.h>

int Palindrome(int k)
{
    int t = 0;
    while (k > 0)
    {
        t *= 10;
        t += k % 10;
        k /= 10;
    }
    return t;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int key = n + Palindrome(n);
    printf("%s", key == Palindrome(key) ? "YES" : "NO");

    return 0;
}
