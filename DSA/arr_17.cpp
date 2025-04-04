// 17. Find the maximum product of subarray.

#include<iostream>
using namespace std;
#include<vector>
 
int MaxProduct(vector<int>arr){
    int multi=1;
    int res=arr[0];

    for (int i=0;i<arr.size()-1;i++){
         multi=multi*arr[i];
        res=max(multi,res);
    if(res==0){
        multi=1;
    }
    }

    return res;
}

int main()
{
    int result=MaxProduct({1,2,-1,5,4,-2,7,6,3});
    cout<<result;
 return 0;
}