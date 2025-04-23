#include<iostream>
#include<vector>
using namespace std;


int partition(vector<int>&arr,int st , int end){
    int idx = st-1,pivit = arr[end];

    for(int j =st;j<end;j++){
        if(arr[j] <= pivit){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }

    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int st,int end){
    if(st<end){
        int pvtIdx = partition(arr,st,end);
        quickSort(arr,st,pvtIdx-1); //Left side 
        quickSort(arr,pvtIdx+1,end); //right side
    }
}

int main(){
    vector<int>arr ={54,23,1,87,5,3,87,0,3};
    quickSort(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}