#include<iostream>
using namespace std;

void Pattern(int a){
    for(int i=0;i<a;i++){
        int j=a;
        while(i<j){
            cout<<"*";
            j--;
        }
        cout<<endl;
    }
};
 

int main()
{
Pattern(5);
 
 return 0;
}