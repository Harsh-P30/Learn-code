#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *x=&a;
    int **y=&x;

    cout<<"address of a :- "<< x<<endl; // address of a
    cout<<"address of pointer x :- "<< y<<endl; // address of pointer x
    cout<<"value of a by pointer x:- "<<*x<<endl;
    cout<<"value of a by pointer y:- "<<**y;

}