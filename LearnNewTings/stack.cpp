#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>stc;

    stc.push(4);
    stc.push(5);
    stc.push(6);
    stc.push(7);
    stc.push(8);
    stc.push(9);
    cout<<"stack size:- "<<stc.size()<<endl;
    

    while (!stc.empty()) 
    {
        cout<<stc.top()<<endl;
        stc.pop();
    }

    
    
}