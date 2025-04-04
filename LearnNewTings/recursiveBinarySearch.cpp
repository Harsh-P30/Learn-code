#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector<int>arr,int target,int low,int high){

    if(low==high){
        if(arr[low]==target){
            return low;
        }else return 0;
    }   
        else{
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                return mid;
            }   
                else if(arr[mid]<target){
                    return recBinarySearch(arr,target,mid+1,high);
                }else{
                    return recBinarySearch(arr,target,low,mid-1);
                }

        }

}

 
int main()
{
    vector<int>arr={1,3,5,7,10,11,24};
    int result = recBinarySearch(arr,11,0,arr.size());
    cout<<result+1;
 
 return 0;
}




