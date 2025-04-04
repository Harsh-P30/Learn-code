#include<iostream>
#include<vector>
using namespace std;

class Cal{
    public:
    int sum(int a,int b){
        return a + b;
    }
    int sub(int a,int b){
        return a - b;
    }
    int multi(int a,int b){
        return a + b;
    }
    int div(int a,int b){
        return a / b;
    }

};


int main(){
    Cal cal;

    char ch;
    cout<<"enter ";
    cin>>ch;
    int result;

    switch (ch)
    {
    case '+':
        result=cal.sum(5,6);
        break;
    
    case '-':
        result=cal.sub(9,7);
    break;

    case '*':
        result=cal.multi(7,6);
        break;

    case '/':
        result=cal.div(4,2);
        break;
    default:
        cout<<"wrong";
        break;
    }

    cout<<result;

    

}