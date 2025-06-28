/* ✅ Concept:
👉 Subset er sum target kina check.
👉 Backtracking use. */

// Sum of Subset
void sumOfSubset(int i, int weight, int total) {
    if (promising(i, weight, total)) {
        if (weight == targetSum) {
            printSolution();
        }
        else {
            // Include
            x[i+1] = 1;
            sumOfSubset(i+1, weight + w[i+1], total - w[i+1]);

            // Exclude
            x[i+1] = 0;
            sumOfSubset(i+1, weight, total - w[i+1]);
        }
    }
}