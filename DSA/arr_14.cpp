// 14. Rearrange the array in alternating positive and negative numbers.

#include<iostream>
using namespace std;
#include<vector>

vector<int>alternating(vector<int>arr){

    vector<int>positive;
    vector<int>negative;

    for(int i=0;i<arr.size();i++){
        if(arr[i]>=0){
            positive.push_back(arr[i]);
        }else{
            negative.push_back(arr[i]);
        }
    }

    //merge
    vector<int>arranged;
    int i=0,j=0;
    while(positive.size()>i && negative.size()>j){
        arranged.push_back(positive[i++]);
        arranged.push_back(negative[j++]);
    }

    while(positive.size()>i){
        arranged.push_back(positive[i++]);
    }
    while(negative.size()>j){
        arranged.push_back(negative[j++]);
    }


    return arranged;
}
 
 
int main()
{
    vector<int>solution=alternating({-2,3,2,-2,-4,-5,-2,2,5,-4});
    for(int i=0;i<solution.size();i++){
        cout<<solution[i]<<endl;
    }
    return 0;
}
