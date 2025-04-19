#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>&arr){

    int n = arr.size()-1;
    
    for(int i=0;i<n;i++){
        bool swapped =0;
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1] ){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }

        if(swapped == 1) break;
    }

}

int printArray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr={1,0,2,9,3,8,4,5,6};
    bubbleSort(arr);
    cout<<"Array sorted -> ";
    printArray(arr);
}