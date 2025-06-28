/* ✅ Concept:
👉 Single source shortest path.
👉 Negative weight support.
👉 n-1 times edge relax. */

// Bellman-Ford Algorithm
void bellmanFord(int n, int edges[][3], int E, int source) {
    int dist[N];
    for (int i = 1; i <= n; i++)
        dist[i] = INF;
    dist[source] = 0;

    for (int k = 1; k <= n - 1; k++) {
        for (int e = 0; e < E; e++) {
            int u = edges[e][0];
            int v = edges[e][1];
            int w = edges[e][2];

            if (dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }

    // Check for negative cycle
    for (int e = 0; e < E; e++) {
        int u = edges[e][0];
        int v = edges[e][1];
        int w = edges[e][2];

        if (dist[u] + w < dist[v])
            cout << "Negative cycle detected" << endl;
    }
}
