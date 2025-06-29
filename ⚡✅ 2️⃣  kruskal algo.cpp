// Function to run Kruskal’s Algorithm
int kruskalMST(int V, vector<Edge>& edges) {
    sort(edges.begin(), edges.end()); // Step 1: sort edges by weight

    parent.resize(V);
    rank.resize(V, 0);
    for (int i = 0; i < V; i++) parent[i] = i;

    int totalCost = 0;

    // Step 2: pick edges one by one
    for (Edge e : edges) {
        if (find(e.u) != find(e.v)) {  // no cycle
            totalCost += e.weight;     // add to MST
            unite(e.u, e.v);           // connect them
        }
    }

    return totalCost;
}