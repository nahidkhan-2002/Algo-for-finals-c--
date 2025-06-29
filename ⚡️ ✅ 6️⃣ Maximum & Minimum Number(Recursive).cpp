void FindMaxMin(int arr[], int low, int high, int &minVal, int &maxVal) {
    if (low == high) {
        // Only one element
        minVal = maxVal = arr[low];
    } 
    else if (high == low + 1) {
        // Two elements
        if (arr[low] < arr[high]) {
            minVal = arr[low];
            maxVal = arr[high];
        } else {
            minVal = arr[high];
            maxVal = arr[low];
        }
    } 
    else {
        // More than two elements
        int mid = (low + high) / 2;
        int min1, max1, min2, max2;

        FindMaxMin(arr, low, mid, min1, max1);
        FindMaxMin(arr, mid + 1, high, min2, max2);

        minVal = (min1 < min2) ? min1 : min2;
        maxVal = (max1 > max2) ? max1 : max2;
    }
}