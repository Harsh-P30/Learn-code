// // Find the maximum and minimum elements in an array.

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,10,4,2,0,5,2,3,8};
//     int max=0,min=arr[0];
//     int length=sizeof(arr)/sizeof(int);
//     for(int i=0;i<length;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }

//     cout<<"max:- "<<max<<endl;
//     cout<<"min:- "<<min;

// }


#include<iostream>
#include<vector>
using namespace std;

class MaxMin{
    public:
    pair<int,int>findMaxMin(const vector<int>& arr){// pair allows you to store two disparate items as a single entity.{max,min}
        int max=arr[0];//initialize max with the first element
        int min=arr[0];//initialize min with the first element


        for(int i=0;i<arr.size();i++){// loop to find max min
            if (max<arr[i]){
                max=arr[i];
            }
            if(min>arr[i]){
                min=arr[i];
            }
        }

        return{max,min};// return max and min , it is in type pair function that return written as return{max,min} and return at same time. 

    }

};


int main(){
    MaxMin solution;// make object name solution and initialize Maxmin

    vector<int> arr={1,2,3,12,5,334,0};// same data type as function

    pair<int,int>result=solution.findMaxMin(arr);


    cout<<"max"<<result.first<<endl;// we use pair that why .first & .second;
    cout<<"min"<<result.second;


}