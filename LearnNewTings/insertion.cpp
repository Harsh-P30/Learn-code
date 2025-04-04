// // 31.Insertion sort
// #include<iostream>
// using namespace std;
// #include <vector>

// vector<int> insertionSort(vector<int>arr){
//     for(int i=2;i<arr.size();i++){
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0&&arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;

//     }

//     return arr;
// };
 
// int main()
// {

// vector<int>result=insertionSort({0,5,1,67,23,7});

// for(int i=0;i<result.size();i++){
//     cout<<result[i]<<" ";
// }
// cout<<endl<<result.size();
 
//  return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

vector<int>insertionSort(vector<int>arr){
    for(int i=1;i<arr.size();i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return arr;

};

 
int main()
{
    vector<int>result=insertionSort({2,5,0,1,8,5,7,2});

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl<<result.size();
 
 return 0;
}
