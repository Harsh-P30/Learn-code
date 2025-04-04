// 30.selection sort

#include<iostream>
#include<vector>
using namespace std;

vector<int>SelectionSort(vector<int>arr){
    for(int i=0;i<arr.size()-1;i++){
        int min=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min=j;
                
            }
        }
        if(min!=i){

                int temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
        }
    }

    return arr;
}

int main(){
    vector<int>result=SelectionSort({1,5,1,9,8,9});
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}







