#include<iostream>
using namespace std;


void Pattern(int n){
    for(int i=0;i<n;i++){
        int key=1;
        for(int j=0;j<n;j++){
            cout<<key;
            key++;
        }
        cout<<endl;
    }
}
 
int main()
{
    Pattern(4);

 return 0;
}