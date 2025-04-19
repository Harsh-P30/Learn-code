#include <iostream>
#include <vector>
using namespace std;

int recursiveBinarySearch(vector<int> arr, int search, int low, int high)
{

    if (arr.size() <= 1)
    {
        return (arr[0] == search) ? 0 : -1;
    }
    else
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > search)
        {
            return recursiveBinarySearch(arr, search, low, mid - 1);  // you have to you're calling the function recursively and returning the result;
        }
        else if (arr[mid] < search)
        {
            return recursiveBinarySearch(arr, search, mid + 1, high); //// you have to you're calling the function recursively and returning the result;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search = 9;
    int low = 0;
    int high = arr.size() - 1;
    int ans = recursiveBinarySearch(arr, search, low, high);
    cout << "Index of " << search << "-> " << ans;
}