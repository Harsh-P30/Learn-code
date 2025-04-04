// 11. Find the largest sum contiguous subarray (Kadane’s Algorithm).
#include<iostream>
#include<vector>
using namespace std;

int LargestSumContiSubarr(vector<int>arr){
    int res=arr[0];
    int sum=0;

    for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            res=max(res,sum);
        if(sum<0){
            sum=0;
        }
    }

    return res;

}
 
 
int main()
{
    int result=LargestSumContiSubarr({1,2,3,-8,4,9,-1,7,9,5,9});
    
    cout<<result;
 
 return 0;
}