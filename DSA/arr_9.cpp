// Reverse the entire array.

#include<iostream>
#include<vector>
using namespace std;

vector<int>ReverseArray(vector<int>arr){
    vector<int>result;
    int size=arr.size();
    for(int i=size-1;i>=0;i--){
        result.push_back(arr[i]); // 6 <- 5 <- 4 <- 3
    }

    return result;


}

int main(){
    vector<int>result=ReverseArray({1,2,3,4});
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}


// #include<iostream>

// using namespace std;

// int main(){
//     int arr[]={2,3,4,5};

//     int size=sizeof(arr)/sizeof(arr[0]); // we cant use here .size() becaus it is not a obj;


//     for(int i=size-1;i>=0;i--){
//         cout<<arr[i];
//     }
// }

