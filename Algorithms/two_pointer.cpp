#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// two sum problem we have to find two number those sum is equal to total give always sorted array

void twoSum(vector<int> arr, int total)
{
    
    int low = 0;
    int high = arr.size() - 1;
    bool find = false;

    while (low < high)
    {
        if ((arr[low] + arr[high]) < total){
            low++;
        }else if((arr[low] +arr[high]) > total){
            high--;
        }else{
            cout<<"low-> "<<low+1<<" high-> "<<high+1;
            find=true;
            break;
        }
    }
    if(find!=true){
        cout<<"Not find any two number those addition can be equal to total";
    }
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int total = 55;
    twoSum(arr, total);
}
