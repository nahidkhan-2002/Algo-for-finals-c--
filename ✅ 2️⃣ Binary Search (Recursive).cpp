/* ✅ Concept:
👉 Function nijeke call kore divide and conquer.

✅ C++ Style Pseudocode: */

// Recursive Binary Search
int recursiveBinarySearch(int a[], int low, int high, int x) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (a[mid] == x)
        return mid;
    else if (x < a[mid])
        return recursiveBinarySearch(a, low, mid - 1, x);
    else
        return recursiveBinarySearch(a, mid + 1, high, x);
}
