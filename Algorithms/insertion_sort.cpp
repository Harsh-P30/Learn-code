#include<iostream>
#include<vector>
using namespace std;

void insertionSort( vector<int>&arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int key =arr[i];
        int j=i-1;

        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] =key;
    }
}


void printArray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int>arr={2,4,6,2,5,9,4,23,7};
    insertionSort(arr);

    cout<<"Sorted array -> ";
    printArray(arr);
}