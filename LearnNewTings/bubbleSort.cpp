// 12. Implement Bubble Sort

#include<iostream>
#include<vector>
using namespace std;
 
class Sort{
    public:
    vector<int>BubbleSort(vector<int>arr){
        for(int i=0;i<arr.size()-1;i++){  // size -1 due to start with
            for(int j=0;j<arr.size()-1-i;j++){
                if(arr[j]>arr[j+1]){

                    swap(arr[j],arr[j+1]); // swap function

                    // int temp=arr[j];    " if you 
                    // arr[j]=arr[j+1];        don't want 
                    // arr[j+1]=temp;              to use swap function"
                }
            }
        }
        return arr;
    }
};

 
int main()
{
    Sort solution;
    vector<int>result=solution.BubbleSort({1,6,8,2,7,3,4});
    for(int i=0;i<result.size();i++){
        cout<<result[i];

    }
    
 
 return 0;
}