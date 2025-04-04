// // Find the second largest element in an array
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[7]={1,5,8,0,2,6,2};
//     int max=0,lastMax=0;
//     for(int i=0;i<7;i++){
//         if(max<arr[i]){
//             lastMax=max;
//             max=arr[i];
            
//         }
//         else if(arr[i] > lastMax && arr[i] != max) {
//             lastMax = arr[i]; // Update second largest if it's not equal to the largest
//         }
        
//     }

//     cout<<"Second max:- "<<lastMax<<endl;
//     cout<<max; 
// }



#include<iostream>
#include<vector>
using namespace std;

class SecondLargest{
    public:
    int seLa(vector<int>&arr){
        int max=0;
        int secondmax=0;

        for (int i=0;i<arr.size();i++){
            if (max<arr[i]){
                secondmax=max;
                max=arr[i];
            }

            else if(secondmax>max&&arr[i]!=max){
                secondmax=arr[i];
            }

        }
        return secondmax;
        
    }
};

int main(){
    SecondLargest solution;
    vector<int>arr={1,2,6,1,5,9,4,2};


    int result=solution.seLa(arr);

    cout<<result;

}