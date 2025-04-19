// take a element and then find a smallest element and excange them till find smallest element after that swap with index of captured element.


#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{

    int n = arr.size();
    for (int i = 0; i < n-1; i++)
    {   int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }

        }
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(vector<int> arr)
{
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr = {9, 3, 0, 2};
    selectionSort(arr);
    cout << "Sorted Array :-> ";
    printArray(arr);
}