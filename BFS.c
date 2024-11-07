// implement breadth first search
#include <stdio.h>
// #include<conio.h>

int adjacency_matrix[10][10], visited[10], q[10];
int num_of_vertices, front = 0, rear = -1;

void bfs(int vertex)
{
    int i;
    for (i = 0; i < num_of_vertices; i++)
    {
        if (adjacency_matrix[vertex][i] == 1 && visited[i] == 0)
        {
            q[++rear] = i;
            visited[i] = 1;
            printf("%d ", i);
        }
    }
    if (front <= rear)
    {
        bfs(q[front++]);
    }
}

int main()
{
    // clrscr();

    int i, j, vertex;

    printf("Enter number of vertices: ");
    scanf("%d", &num_of_vertices);

    printf("Enter adjacency matrix of the graph: ");
    for (i = 0; i < num_of_vertices; i++)
    {
        for (j = 0; j < num_of_vertices; j++)
        {
            scanf("%d", &adjacency_matrix[i][j]);
        }
    }

    for (i = 0; i < num_of_vertices; i++)
    {
        visited[i] = 0;
    }

    printf("Enter starting vertex: ");
    scanf("%d", &vertex);
    visited[vertex] = 1;

    printf("BFS:\n");
    printf("%d ", vertex);
    bfs(vertex);

    // getch();
    return 0;
}