#include<iostream>
#include<vector>
using namespace std;

vector<int>primeNumber(int n){
    vector<int>arr;
    int count=0;
    int m=2;
    if(n<=1){
        cout<<"not prime";
    }

    while(m<=n){
        for(int i=1;i<=m;i++){
            if(m%i==0){
                count++;
            }
        }
        if(count==2){
            arr.push_back(m);
        }
        m++;
        count=0;
    }
    
    return arr;

}
 
int main()
{   
    int num;
    cout<<"Enter number to check till prime :-  ";
    cin>> num;
    vector<int>result=primeNumber(num);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"  ";
    }

    cout<<endl<<"total prime number till "<<num<<":- "<<result.size();
 
 return 0;
}