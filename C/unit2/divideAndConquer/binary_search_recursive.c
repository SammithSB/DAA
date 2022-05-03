#include <stdio.h>

int binsearch(int *a, int low, int high, int key)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            return binsearch(a, low, mid - 1, key);
        }
        else
        {
            return binsearch(a, mid + 1, high, key);
        }
    }
    return -1;
}

int main()
{
    int a[] = {11, 25, 39, 44, 59, 67, 79, 98};
    int ans = binsearch(a, 0, 7, 79);
    printf("key is present at index %d", ans);
}