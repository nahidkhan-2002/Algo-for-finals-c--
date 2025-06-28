/* ✅ Concept:
👉 Sorted array te target khoja. Half kore search.
👉 O(log n) time. */

// Iterative Binary Search
int binarySearch(int a[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (x < a[mid]) {
            high = mid - 1;
        }
        else if (x > a[mid]) {
            low = mid + 1;
        }
        else {
            return mid;  // Found
        }
    }

    return -1;  // Not found
}
