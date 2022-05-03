// import header files
#include <stdio.h>

// buiding swap function to swap two values
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// selection sort algorithm
void selsort(int a[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(&a[min], &a[i]);
    }
}
// main function to show how it works
int main()
{
    int arr[] = {12, 1, 45, 90, 14, 35, 89, 16, 20, 29};
    int size = sizeof(arr) / sizeof(arr[0]);
    selsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}