#include <stdio.h>

int binrec(n)
{
    if (n == 1)
        return 1;
    else
    {
        return binrec(n / 2) + 1;
    }
}
int main()
{
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    int res = binrec(n);
    printf("%d", res);
}