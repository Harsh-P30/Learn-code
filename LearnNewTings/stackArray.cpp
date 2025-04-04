#include<iostream>
using namespace std;

class stc{
public:
    int arr[100];
    int size=100;
    int top=0;

    int push(int num){
        if(top>=size){
            cout<<"Stack Overflow";
        }else{
            arr[top++]=num;
        }
    }

    int topOfTheElement(){
        if(top<=0){
            cout<<endl<<"Empty Stack";
        }else{
            cout<<arr[top-1];
        }
    }

    void pop(){
        if(top<=0){
            cout<<"stack underflow";
        }else{
            top--;
        }
    }
   
};

int main(){
    stc s;

    s.push(7);
    s.push(6);
    s.push(8);

    s.pop();
    s.pop();
    s.pop();
   
    
    
    s.topOfTheElement();
    
}