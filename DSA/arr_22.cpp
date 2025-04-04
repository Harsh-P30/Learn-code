// Find the missing number in an array of size `n-1` containing numbers from `1 to n`.

#include<iostream>
using namespace std;
#include<vector>

int MissingNumber(vector<int>arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]!=arr[i+1]-1){
            return arr[i]+1;
        }
    }
}
 
 
int main()
{
 int result = MissingNumber({1,2,3,5,6});
 cout<<result;
 return 0;
}