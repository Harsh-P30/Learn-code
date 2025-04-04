#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted halves in-place
void merge(vector<int> &arr, int s, int m, int e) {
    int start = s;    // Pointer for the left half
    int mid = m + 1;  // Pointer for the right half

    // Merge the two halves
    while (start <= m && mid <= e) {
        if (arr[start] <= arr[mid]) {
            // Left element is already in the correct position
            start++;
        } else {
            // Right element is smaller and needs to be placed in the left part
            int value = arr[mid];
            int k = mid;

            // Shift elements to make space for the smaller element
            while (k > start) {
                arr[k] = arr[k - 1];
                k--;
            }

            arr[start] = value;

            // Update pointers
            start++;
            m++;
            mid++;
        }
    }
}

// Function to recursively divide and sort the array
void mergeSort(vector<int> &arr, int s, int e) {
    if (s >= e) {
        return;  // Base case: single element
    }

    int mid = s + (e - s) / 2;

    // Sort the left and right halves
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    // Merge the sorted halves
    merge(arr, s, mid, e);
}

int main() {
    vector<int> arr = {5, 21, 9, 3, 2, 0};

    // Perform in-place merge sort
    mergeSort(arr, 0, arr.size() - 1);

    // Print the sorted array
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}
