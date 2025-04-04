// Max sum of continious four number

#include<iostream>
#include<vector>
using namespace std;

int maxSumOfContiniousFourNo(vector<int>arr,int k){
    if(arr.size()<k){
        return -1;
    }
    int max=0;
    int sum=0;

    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    max=sum;
    for(int i=k;i<arr.size();i++){
        sum=sum-arr[i-k]+arr[i];
            if(max<sum){
                max=sum;
            }
    }
    return max;
};
 
int main()
{   
    vector<int>arr={2,4,1,0,13,0,0,9,9};
    cout<<"Max sum of continious four number :-"<<maxSumOfContiniousFourNo(arr,4);
 
    return 0;
}


//used silding window 