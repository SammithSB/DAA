#include <stdio.h>

int main()
{
    int a[] = {12, 19, 45, 90, 14, 35, 89, 16, 20, 29};
    int min = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] > min)
        {
            min = a[i];
        }
    }
    printf("%d", min);
}