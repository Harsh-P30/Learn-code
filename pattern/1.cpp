#include<iostream>
using namespace std;
#include<vector>

vector<int>Pattern(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"*";
    }
    cout<<endl;
  }  
};
 
int main()
{   
  Pattern(4);

 return 0;
}