#include<iostream>
using namespace std;

void Pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
};
 
 
int main()
{
Pattern(5);
 
 return 0;
}