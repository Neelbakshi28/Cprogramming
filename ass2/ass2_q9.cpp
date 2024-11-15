#include <stdio.h>

int findPeak(int arr[], int n) {
    // Check if the first element is a peak
    if (arr[0] >= arr[1]) {
        return 0;  // First element is a peak
    }
    // Check if the last element is a peak
    if (arr[n - 1] >= arr[n - 2]) {
        return n - 1;  // Last element is a peak
    }
    // Check for peak in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;  // This is a peak
        }
    }
    return -1;  // No peak element found (this line should not be reached)
}

int main() {
    int arr[] = {1, 3, 20, 4, 1};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements in the array
    
    int peakIndex = findPeak(arr, n);
    
    if (peakIndex != -1) {
        printf("Peak element is %d at index %d\n", arr[peakIndex], peakIndex);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}
