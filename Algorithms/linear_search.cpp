#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>arr,int search){

    for(int i=0;i<arr.size();i++){
        if(arr[i] == search){
            return i+1;
        }
    }

    return -1;
}


int main()
{
    vector<int> arr = {2, 5, 2, 8, 76, 4, 8, 5};
    int search = 5;
    int ans = linearSearch(arr,search);
    cout<<"Index of "<<search << "-> "<< ans;
}