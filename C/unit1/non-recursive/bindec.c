#include <stdio.h>

int main()
{
    int c = 1;
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    while (n > 1)
    {
        c += 1;
        n /= 2;
    }
    printf("%d\n", c);
}