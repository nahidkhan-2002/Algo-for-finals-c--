/* ✅ Concept:
👉 Node gulo ke color koro.
👉 Adjacent same color na. */

// m-Coloring Problem
void mColoring(int k) {
    do {
        nextValue(k);
        if (x[k] == 0)
            return;
        if (k == n)
            printSolution();
        else
            mColoring(k+1);
    } while (true);
}

void nextValue(int k) {
    do {
        x[k] = (x[k] + 1) % (m + 1);
        if (x[k] == 0)
            return;
        int j;
        for (j = 1; j <= n; j++) {
            if (adjacent[k][j] == 1 && x[k] == x[j])
                break;
        }
        if (j == n + 1)
            return;
    } while (true);
}
