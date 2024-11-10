#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int adj[MAX][MAX], visited[MAX], queue[MAX];
int front = -1, rear = -1;
int n;

void enqueue(int v) {
    if (rear == MAX - 1) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = v;
    }
}

int dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
        return -1;
    } else {
        int val = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return val;
    }
}

void BFS(int start) {
    visited[start] = 1;
    enqueue(start);

    while (front != -1) {
        int v = dequeue();
        printf("%d ", v);

        for (int i = 0; i < n; i++) {
            if (adj[v][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}

int main() {
    int edges, u, v;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        adj[u][v] = adj[v][u] = 1;
    }

    printf("BFS traversal starting from vertex 0: ");
    BFS(0);
    printf("\n");

    return 0;
}
