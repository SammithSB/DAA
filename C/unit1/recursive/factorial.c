#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}

int main()
{
    int n;
    printf("Enter non negative integer n: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);
}