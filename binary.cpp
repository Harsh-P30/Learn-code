#include<iostream>
#include<vector>
using namespace std;


int BinarySearch(vector<int>arr,int key){
    int low =0;
    int high = arr.size()-1;

    while(low <= high){

    int mid=(low+high)/2;
    // int mid = low+(high-low)/2;  for optimize and prevention from overflow 

    if(key<arr[mid]){  
        high=mid-1;
    }
    else if(key>arr[mid]){
        low=mid+1;
    }
    else
    return mid+1;
    }

    return -1;

}

int main(){
    int result = BinarySearch({1,2,3,4,5,6,7,8,9},2);
    cout<<result;

}

