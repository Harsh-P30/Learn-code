#include<iostream>
using namespace std;

void fibonacciSeries(int n){

    unsigned long long first =0,next =1;
    cout<<first<<" "<<next<<" ";
    for(int i=0;i<n;i++){
        unsigned long long sum = first+next;
        first =next;
        next = sum;
        cout<<next<<" ";
    }
}



int main(){
    fibonacciSeries(50);
}