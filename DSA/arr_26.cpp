// 26. Solve the Two Sum problem.

#include<iostream>
using namespace std;
#include<vector>


vector<int> TwoSUm(vector<int>arr,int target){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(i!=j && arr[i]+arr[j]==target){
                return{ i,j};
            }
        }
    }
    return {};
}

int main()
{
    vector<int>arr={1,3,5,2,6};

    vector<int> result= TwoSUm(arr,4);
    for(int i=0;i<result.size();i++){
        cout<<result[i]+1<<" ";
    }
 
 return 0;
}