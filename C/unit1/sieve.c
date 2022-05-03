#include <stdio.h>

int main()
{
    int n;
    printf("enter number of terms: ");
    scanf("%d", &n);
    int a[n + 1];
    a[0] = 0;
    for (int i = 2; i <= n; i++)
    {
        a[i] = i;
    }
    for (int i = 2; i * i < n + 1; i++)
    {
        if (a[i] != 0)
        {
            int j = i * i;
            while (j < n + 1)
            {
                a[j] = 0;
                j = j + i;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (a[i] > 1)
        {
            printf("%d ", a[i]);
        }
    }
}