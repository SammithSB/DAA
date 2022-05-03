#include <stdio.h>
#define n 2
void mult(int A[][n], int B[][n], int C[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[n][n] = {{1, 2}, {3, 4}};
    int B[n][n] = {{1, 1}, {1, 1}};
    int C[n][n];
    mult(A, B, C);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
