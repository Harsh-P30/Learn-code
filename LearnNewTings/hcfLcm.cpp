#include<iostream>
using namespace std;

int hcf(int a,int b){
    while(b!=0){
        a=a%b;
        swap(a,b);
    }
    return a;

}

int lcm(int a,int b){

    return (a*b)/hcf(a,b); // hcf(a,b) because it is a function
}
 
int main()
{
    cout<<"Hcf :- "<<hcf(15,20)<<endl;
    cout<<"lcm :- "<<lcm(10,15);
 
 return 0;
}