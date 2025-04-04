// // Implement Linear Search
// #include<iostream>
// using namespace std;

// int main(){
//     int search;
//     int arr[5]={1,2,3,4,5};
//     int length=sizeof(arr)/sizeof(int);

//     cout<<"enter searching element:- ";
//     cin>>search;

//     for (int i=0;i<length;i++){
//         if(search==arr[i]){
//             cout<<i+1;
//         }
//     }
   
// }



#include<iostream>
#include<vector>
using namespace std;

class LinearSearch{
    public:
    char linearsearch(char search,vector<char>arr){
        for(int i=0;i<arr.size();i++){
            if(search==arr[i]){
                return i+1;
            }
        }
    }
};

int main(){
    LinearSearch solution;

    vector<char>arr={'a','b','c','d'};

    int result=solution.linearsearch('d',arr);

    cout<<result;
}
