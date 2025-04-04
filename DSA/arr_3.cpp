// // Delete an element from a specific position in an array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int pos,i;

//     cout<<"enter position";
//     cin>>pos;

//     if(pos==0||pos>5){
//         cout<<"invalid";
//         return 0;
//     }
//     arr[pos-1]={};

//     for(i=pos-1;i<4;i++){
//         arr[i]=arr[i+1];
//     }

//     for(i=0;i<4;i++){
//         cout<<arr[i];
//     }
// }



#include<iostream>
#include<vector>
using namespace std;


class Delete{
    public:
    vector<int>del(int pos,vector<int>&arr){ // input position and array
        if(pos<=0||pos>arr.size()){  //if position index exceed or smaller than zero
        cout<<"invalid";
        
     }
    arr[pos-1]={}; // delete element form postion so it can empty to itrate next value 
        
        for(int i=pos-1;i<arr.size();i++){
        arr[i]=arr[i+1];  // shifting next value 
         }
        arr.pop_back();//del last element because after shifting last is empty
    return arr;
    }
};

int main(){
    Delete solution;
    vector<int>arr={1,2,3,4,5};
    vector<int>result=solution.del(3,arr);
    
     for(int i=0;i<arr.size();i++){
        cout<<result[i];
    }

}