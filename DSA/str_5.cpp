// 5. Generate all substrings of a string.

#include<iostream>
#include<string>
using namespace std;

string SubString(string str){
    for(int i=0;i<str.size();i++){
        for(int j=1;j<str.size()-i+1;j++){
            cout<<str.substr(i,j)<<endl;
        }
    }
    
};
 
int main()
{
    SubString("hello");
 
 return 0;
}