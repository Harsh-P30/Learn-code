#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int st, int end)
{
    int idx = st - 1, pivit = arr[end];

    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivit)
        {
            idx++;
            swap(arr[j], arr[idx]);   // change direct into i=original array
        }
    }

    idx++;
    swap(arr[end], arr[idx]);   // change direct into i=original array
    return idx;
}

void quickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pvtIdx = partition(arr, st, end);
        quickSort(arr, st, pvtIdx - 1);  // Left side
        quickSort(arr, pvtIdx + 1, end); // right side
    }
}

int main()
{
    vector<int> arr = {54, 23, 1, 87, 5, 3, 87, 0, 3};
    quickSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

/*


📌 1. Concept
Quick Sort is a divide and conquer algorithm:

It picks an element as pivot and partitions the array.

Elements smaller than the pivot go to the left.

Elements greater than the pivot go to the right.

It recursively applies the same logic to the subarrays.


🔁 3. Time Complexity
Case	Time Complexity
Best Case	O(n log n)
Average Case	O(n log n)
Worst Case	O(n²)
Worst case occurs when pivot is always the smallest or largest element (like already sorted array).

Can be improved using Randomized Pivot or Median of Three.




*/