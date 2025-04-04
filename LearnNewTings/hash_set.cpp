#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
 
    unordered_set<int>num;

    num.insert(1);
    num.insert(2);
    num.insert(7);
    num.insert(4);
    num.insert(3);  // duplicate will not insert
    num.insert(4);  // duplicate will not insert

    for(int x:num){
        cout<<x<<" ";
    }
    cout<<endl;

    if (num.find(4)!= num.end()) {
        cout<<"yes";
    }else
    cout<<"not";

    cout<<endl;

    num.erase(2);   // delete element 2;

    for(int x:num){
        cout<<x<<" ";
    }



 
 return 0;
}