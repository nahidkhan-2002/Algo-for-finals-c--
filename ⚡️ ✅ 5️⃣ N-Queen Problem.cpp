/* ✅ Concept:
👉 N x N board e N queen.
👉 No attack. */

// N-Queen Problem
void NQueen(int k, int n) {
    for (int i = 1; i <= n; i++) {
        if (place(k, i)) {
            x[k] = i;
            if (k == n)
                printSolution();
            else
                NQueen(k+1, n);
        }
    }
}

bool place(int k, int i) {
    for (int j = 1; j <= k - 1; j++) {
        if (x[j] == i || abs(x[j] - i) == abs(j - k))
            return false;
    }
    return true;
}
