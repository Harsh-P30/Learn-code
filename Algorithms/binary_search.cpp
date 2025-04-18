#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int key) {
    int high = arr.size() - 1; // Fix high index
    int low = 0;

    if (arr.size() <= 1) {
        return (arr[0] == key) ? 0 : -1;
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > key) {
            high = mid - 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            return mid;
        }
    }

    return -1; // Key not found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int key = 4;
    int index = binarySearch(arr, key);
    cout << "Key found at index: " << index << endl;
  

    return 0;
}
