#include <stdio.h>
#include <stdbool.h>

#define V 4 // Number of vertices

int graph[V][V] = {
    {0, 1, 1, 1},
    {1, 0, 1, 0},
    {1, 1, 0, 1},
    {1, 0, 1, 0}
};
int colors[V];

// Function to check if coloring is safe
bool isSafe(int v, int c)
{
    for (int i = 0; i < V; i++)
        if (graph[v][i] && colors[i] == c)
            return false;
    return true;
}

// Backtracking function
bool graphColoringUtil(int m, int v)
{
    if (v == V)
        return true;

    for (int c = 1; c <= m; c++)
    {
        if (isSafe(v, c))
        {
            colors[v] = c;
            if (graphColoringUtil(m, v + 1))
                return true;
            colors[v] = 0; // Backtrack
        }
    }
    return false;
}

// Main function
void graphColoring(int m)
{
    for (int i = 0; i < V; i++)
        colors[i] = 0;

    if (graphColoringUtil(m, 0))
    {
        printf("Solution exists with %d colors:\n", m);
        for (int i = 0; i < V; i++)
            printf("Vertex %d ---> Color %d\n", i, colors[i]);
    }
    else
    {
        printf("Solution does not exist with %d colors\n", m);
    }
}

int main()
{
    int m = 2; // Number of colors
    graphColoring(m);
    return 0;
}
