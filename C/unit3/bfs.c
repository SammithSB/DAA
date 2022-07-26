/*Implementation of BFS traverasal mechanism*/
#include <stdio.h>

int graph[100][100], visited[10], total;
void bfs(int start)
{
    int i;
    printf("%d->", start);
    visited[start] = 1;
    for (i = 0; i < total; i++)
    {
        if (!visited[i] && graph[start][i] == 1)
        {
            bfs(i);
        }
    }
}
int main()
{
    int i, j;
    printf("\nEnter number of vertices\n");
    scanf("%d", &total);
    /*Adjacency matrix input*/
    printf("\nEnter adj matrix\n");
    for (i = 0; i < total; i++)
    {
        for (j = 0; j < total; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }
    for (i = 0; i < total; i++)
    {
        visited[i] = 0;
    }
    printf("\nbfs traversal order is \n");
    bfs(1);
}
