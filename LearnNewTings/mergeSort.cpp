// 13. Implement Merge Sort.

#include<iostream>
#include<vector>
using namespace std;

 void merge(int arr[],int low,int mid,int high){
    int sortedArr[high-low+1];

    int idx1=low;  //  tracking first array
    int idx2=mid+1; // tracking second array
    int x=0;

    while(idx1<=mid && idx2<=high){
        if(arr[idx1]<=arr[idx2]){
            sortedArr[x++]=arr[idx1++];
        }
        else
         sortedArr[x++]=arr[idx2++];
    }

    while(idx1<=mid){
        sortedArr[x++]=arr[idx1++];
    }

    while(idx2<=high){
        sortedArr[x++]=arr[idx2++];
    }

    for(int i=0;i<x;i++){
        arr[low+i]=sortedArr[i];
    }


}

void divide(int arr[],int low,int high){
    if(low<high){
    int mid=low+(high-low)/2;
    divide(arr,low,mid);
    divide(arr,mid+1,high);
    merge(arr,low,mid,high);
    

    }
}

int main()
{
    int arr[]={3,5,1,6,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    divide(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 
 return 0;
}