#include<iostream>
using namespace std;
 
void Pattern(int n){
    
    char count='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
};

int main()
{
    Pattern(4);
 
 return 0;
}