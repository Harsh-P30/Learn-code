#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    vector<int> sortArr;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            sortArr.push_back(arr[i++]);
        } else {
            sortArr.push_back(arr[j++]);
        }
    }

    while (i <= mid) {
        sortArr.push_back(arr[i++]);
    }

    while (j <= high) {
        sortArr.push_back(arr[j++]);
    }

    for (int k = 0; k < sortArr.size(); k++) {
        arr[low + k] = sortArr[k];
    }
}

void divide(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int mid = low + (high - low) / 2;

    divide(arr, low, mid);
    divide(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {1, 7, 3, 6, 5, 0, 4, 2};
    int low = 0;
    int high = arr.size() - 1;

    divide(arr, low, high);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
   