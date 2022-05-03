#include <stdio.h>

// function to determine gcd
int gcd(int a, int b)
{
    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int ans = gcd(12, 24);
    printf("%d", ans);
    return 0;
}