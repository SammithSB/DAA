#include <stdio.h>

void tower(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("move disk 1 from %c to %c\n", A, B);
        return;
    }
    else
    {
        tower(n - 1, A, C, B);
        printf("move disk %d from %c to %c\n", n, A, B);
        tower(n - 1, C, B, A);
    }
}
int main()
{
    int n = 4;
    tower(n, 'A', 'C', 'B');
}