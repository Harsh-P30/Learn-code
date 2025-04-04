// Find the element that appears two time in an array where all other elements appear once.

#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,2};
    int i,j;
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<arr_size;i++){
        for(j=0;j<arr_size;j++){
            if(arr[i]==arr[j]&&i!=j){
                cout<<"index = "<<i<<"and element = "<<arr[i];
                goto end;  // use goto for exit the loop after got the and;
            
            }
        }
    }
    end:
    return 0;

    
}





// #include<iostream>
// #include<vector>
// using namespace std;
 
// pair<int,int>appear_twice(vector<int>arr){
    
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr.size();j++){
//             if(arr[i]==arr[j]&&i!=j){
//                 return make_pair(arr[i],i); // we use pair<> so return will be make_pair(  )
//             }
//         }
//     }

//     return make_pair(-1,-1);
// }


// int main(){
//     pair<int,int>result=appear_twice({1,2,3,4,3});
//     cout<<result.first,result.second;
// }