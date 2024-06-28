#include <stdio.h>
#include <stdlib.h>

int n1;
int *visited;
int **arr;

void dfs(int n2) {
    printf("%d ", n2+1);
    visited[n2] = 1;
    for (int j = 0; j < n1; j++) {
        if (arr[n2][j] == 1 && !visited[j]) {
            dfs(j);
        }
    }
}

int main() {
    printf("Enter the number of nodes: ");
    scanf("%d", &n1);

    visited = (int*)malloc(n1 * sizeof(int));
    arr = (int**)malloc(n1 * sizeof(int*));
    for (int i = 0; i < n1; i++) {
        arr[i] = (int*)malloc(n1 * sizeof(int));
    }

    for (int i = 0; i < n1; i++) {
        visited[i] = 0;
    }

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n1; j++) {
            printf("Enter the node connection for node[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    int n2;
    printf("Enter the node where you want to start: ");
    scanf("%d", &n2);
    n2--; // Adjusting for zero-based indexing

    printf("DFS Traversal starting from node %d:\n", n2 +1);
    dfs(n2);

    for (int i = 0; i < n1; i++) {
        free(arr[i]);
    }
    free(arr);
    free(visited);

    return 0;
}
