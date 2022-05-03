#include <stdio.h>
#define n 4
void gauss(int A[n - 1][n])
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = 0; k < n; k++)
            {
                A[j][k] = A[j][k] - A[i][k] * A[j][i] / A[i][i];
            }
        }
    }
}

int main()
{
    int A[n - 1][n] = {{3, 2, -4, 3}, {2, 3, 3, 15}, {5, -3, 1, 14}};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    gauss(A);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
