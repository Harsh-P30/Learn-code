// 10. Rotate an array to the left by `k` positions.

#include<iostream>
#include<vector>
using namespace std;

vector<int> ReverseArr(vector<int>arr,int k){
    int size=arr.size();
    vector<int> result;
    for(int i=0;i<k;i++){
        result.push_back(arr[i]); // remember this when you use vector and push element in some where use " .push_back() funtion"
    }
    for(int i=size-1;i>=k;i--){
        result.push_back(arr[i]);
    }

    return result;

}

int main(){
    vector<int>result=ReverseArr({1,2,3,4,5,6},3);
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}
