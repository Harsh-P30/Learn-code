// Implement Binary Search on a sorted array.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector<int> arr={1,3,4,5,7,8};
//     int target=3;


//     int low=0;
//     int high=arr.size()-1;

//     while(low<=high){
//         int mid=low+(high-low)/2;

//         if(target<arr[mid]){
            
//             high=mid-1;
//         }
//         else if(target>arr[mid]){
//             low=mid+1;
//         }

//         else{
//         cout<<mid;
//         break;
//         }
//     }

//     return 0;
// }




#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>arr,int target){
    int low=0;
    int high=arr.size()-1;// index start with zero;
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(target<arr[mid])
        {
            high=mid-1; // change high 
        }
        else if(target>arr[mid]){
            low=mid+1;  // change low
        }
        else 
        return mid+1;
    }

    cout<<"someting wrong";

}

int main(){
    int result=BinarySearch({-10,0,1,2,3,4,5,6,7,8,19,15,19,45,76},0);
    cout<<"index of 0 is :- "<<result;
}

