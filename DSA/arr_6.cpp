// Find the element that appears only once in an array where all other elements appear twice(unique).


#include<iostream>
using namespace std;

int main(){
    int sol=0;
    int arr[]={1,2,3,4,1,2,3,4,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        sol=sol^arr[i];
        
    }
    cout<<sol;

}



// #include<iostream>
// #include<vector>
// using namespace std;

// int unique(vector<int>arr){
//     int sol=0;
//     for(int i=0;i<arr.size();i++){
//         sol=sol^arr[i];
//     }

//     return sol;
// }

// int main(){
//     int result=unique({1,2,3,4,1,2,3,4,47});
//     cout<<result;

// }