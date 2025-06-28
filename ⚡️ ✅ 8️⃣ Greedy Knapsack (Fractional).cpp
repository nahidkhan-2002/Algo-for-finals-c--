/* ✅ Concept:
👉 Highest value/weight ratio agey.
👉 Fractional allowed. */

// Greedy Knapsack
void greedyKnapsack(int n, float M) {
    sortItemsByRatio();
    float total = 0;
    int i = 1;

    while (i <= n && M > 0) {
        if (w[i] <= M) {
            x[i] = 1;
            M -= w[i];
            total += p[i];
        }
        else {
            x[i] = M / w[i];
            total += x[i] * p[i];
            M = 0;
        }
        i++;
    }

    cout << "Total profit: " << total << endl;
}
