// // Traverse and print each element in an array
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int a[n];  // Declare the array after knowing the size of 'n'
    
//     cout << "Enter the elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     cout << "Elements: ";
//     for(int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }

//     return 0;
// }



#include<iostream>
using namespace std;
#include<vector>

class Solution{

    public:
    vector <int> traversArray(vector<int> &nums){
        vector<int> result;

        for(int i = 0;i<nums.size();i++){
            result.push_back(nums[i]);
        }

        return result;
    }
};


int main (){
    int n;
    cout<<"enter the number of elements:- ";
    cin>>n;

    vector<int> a(n);

    cout<<"Enter the elemets:- ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    Solution sol;
    vector<int> result = sol.traversArray(a);

    cout<<"enements:- ";
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<", ";
    }
    

}


