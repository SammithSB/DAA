#include <stdio.h>

void linear(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("%d found at index %d\n", key, i);
            return;
        }
    }
    printf("%d not found\n", key);
}

int main()
{
    int a[] = {1, 2, 3, 5, 9, 10, 14, 18};
    int n = 8;
    linear(a, n, 14);
}