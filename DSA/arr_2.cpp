// // Insert an element at a specific position in an array
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int size =sizeof(arr)/sizeof(int);
//     cout<<"size:- "<<size;
//     int pos,value;
//     cout<<"enter inserting position:- ";
//     cin>>pos;
//     pos--;
//     cout<<"enter value";
//     cin>> value;
//     for(int i=size;i>pos;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]=value;

//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
// }

#include<iostream>
#include<vector>
using namespace std;

class Insert{
    public:
    vector<int>input(int pos, int value,vector<int>arr){
        pos--;

        for(int i=arr.size();i>pos;i--){
        arr[i]=arr[i-1];
        }
        arr[pos]=value;

        return arr;
    }
};

int main(){
    Insert solution;
    vector<int>arr={1,2,3,4,5,6};
    vector<int>result=solution.input(2,5,arr);

    for(int i=0;i<arr.size()+1;i++){
        cout<<result[i];
    }
}