/* ✅ Concept:
👉 Array theke max, min ber koro. */

// Find Max and Min
void findMaxMin(int a[], int n) {
    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}
