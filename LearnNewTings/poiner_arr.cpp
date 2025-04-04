#include<iostream>
using namespace std;
#include<vector>

using namespace std;

int arr (vector<int>&arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum=arr[i]+sum;
        cout<<&arr[i]<<endl;
    }
    return sum;
}

int main(){
    vector<int>arr1={2,3,4,5,6};
    int result=arr(arr1);
    cout<<result;

    


}



// int main(){
//     int arr[]={2,3,4};
//     cout<<arr<<endl;
//     cout<<*arr+1<<endl;   // go with memory address so (*arr+1 return value of 1 location - 3);
//     cout<<*(arr+1)<<endl;
//     cout<<*arr+1<<endl;

//     cout<<sizeof(arr)<<endl;
//     cout<<sizeof(arr[0]);

// }
