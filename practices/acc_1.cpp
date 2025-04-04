#include<iostream>
#include<vector>
using namespace std;

int RatFood(int r,int u, vector<int>arr,int n){

    if(n==0){
        return -1;
    }
    else{
        int foodRequired=r*u;
        int foodTillNow=0;

        for(int i=0;i<n-1;i++){
            foodTillNow+=arr[i];
            if(foodTillNow>=foodRequired){
                return i+1;
            }
        }
        

    }


};
 
int main()
{

    int result=RatFood(4,4,{5, 9, 6, 8, 3, 4, 7},7);
    cout<<result;
 
 return 0;
}