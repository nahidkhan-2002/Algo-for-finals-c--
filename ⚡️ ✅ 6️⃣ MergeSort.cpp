void MergeSort(int arr[],int left,int right)
{
    if (left<right)
    {
        int mid = (left+right) / 2;
        MergeSort(arr, left, mid);  // Sort the left half
        MergeSort(arr, mid + 1, right); // Sort the right half  
        Merge(arr, left, mid, right); // Merge the sorted halves
    }
}