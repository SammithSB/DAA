#include <stdio.h>

void insertionSort(int *a, int n)
{
    int i, insert, j;
    for (int i = 1; i < n; i++)
    {
        insert = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > insert)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = insert;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}