#include <stdio.h>

int Walk(int front, int back, int steps)
{
    int result = 0;

    int bidirection = front + back;
    if (bidirection <= steps)
    {
        result = (front - back) * (steps / bidirection);
        steps %= bidirection;
    }

    if (front >= steps)
    {
        result += steps;
    }
    else
    {
        result += front;
        steps -= front;
        result -= steps;
    }

    return result;
}

int main()
{
    int a = 0, b = 0, c = 0, d = 0, s = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &s);

    int Nikky = Walk(a, b, s);
    int Byron = Walk(c, d, s);

    printf("%s", Nikky > Byron ? "Nikky" : Nikky == Byron ? "Tied" : "Byron");

    return 0;
}
