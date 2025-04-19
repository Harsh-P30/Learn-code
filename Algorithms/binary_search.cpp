#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr , int search){

    int high = arr.size()-1;   // if high = arr.size();  then high value == arr.size ; and the actual index in size-1;
    int low=0;
    
    // Edge case
    if(arr.size()<=1){
        return ( arr[0]==search) ? 0 :-1;
    }

    while(low<=high){
        int mid = low+ (high -low)/2;
        if(arr[mid]> search){
            high=mid-1;
        }else if(arr[mid]<search){
            low=mid+1;
        }else{
            return mid;
        }
    }

    return -1;

}

int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int search=6;
    int index = binarySearch(arr,search);
    cout<<"index of search value-> "<< index+1;
}