#include <stdio.h>

int binsearch(int *a, int n, int key)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {11, 25, 39, 44, 59, 67, 79, 98};
    int ans = binsearch(a, 8, 79);
    printf("key is present at index %d", ans);
}