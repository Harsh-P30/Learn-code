// 20. Merge two sorted arrays without using extra space.

#include<iostream>
using namespace std;
#include<vector>

vector<int>MergeTwo( vector<int>arr1,vector<int>arr2){
    vector<int>final;
    int size=arr1.size()+arr2.size();
    int m=0,n=0;
    

    for(int i=0;i<size;i++){
        if(arr1[m]<arr2[n]){
            final.push_back(arr1[m]);
            m++;
        }else{
        final.push_back(arr2[n]);
        n++;
        }
    }
    return final;
   
}
 
int main()
{
    vector<int>result=MergeTwo({1,6,2,0,2},{2,6,4,5,7});
     for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
 return 0;
}