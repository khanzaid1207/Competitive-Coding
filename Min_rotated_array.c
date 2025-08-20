#include <stdio.h>

int findMin(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

       
        if (arr[mid] > arr[high]) {
            low = mid + 1;
        } 
        else {
         
            high = mid;
        }
    }

    
    return arr[low];
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Minimum element is: %d\n", findMin(arr, n));
    return 0;
}
