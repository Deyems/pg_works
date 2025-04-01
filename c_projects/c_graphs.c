#include <stdio.h>
#include <stdbool.h>

#define V 5  // Number of vertices

// Function to find the minimum available color for each vertex
void greedyColoring(int graph[V][V]) {
    int result[V];  // Stores assigned colors
    result[0] = 0;  // First vertex gets first color

    // Initialize all vertices as unassigned
    for (int u = 1; u < V; u++){
        result[u] = -1;
        printf("checking unassigned vertices value %d \n", result[u]);
    }

    bool available[V]; // To check available colors
    for (int i = 0; i < V; i++){
        available[i] = false;
    }

    // Assign colors to remaining vertices
    for (int u = 1; u < V; u++) {
        // Check colors of adjacent vertices
        for (int i = 0; i < V; i++){
            printf("value at row %d column %d is => %d \n",u, i, graph[u][i]);
            printf("assigned vertex value %d \n", result[i]);
            // printf();
            if (graph[u][i] && result[i] != -1){
                available[result[i]] = true;
            }
        }

        // Find first available color
        int color;
        for (color = 0; color < V; color++){
            if (!available[color])
                break;
        }

        result[u] = color;  // Assign found color

        // Reset available array for next iteration
        for (int i = 0; i < V; i++){
            available[i] = false;
        }
    }

    // Print the result
    for (int u = 0; u < V; u++)
        printf("Vertex %d ---> Color %d\n", u, result[u]);
}

int main() {
    // Example graph (Adjacency Matrix)
    int graph[V][V] = {
        {0, 1, 1, 1, 0},
        {1, 0, 1, 0, 1},
        {1, 1, 0, 1, 0},
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0}
    };

    greedyColoring(graph);
    return 0;
}