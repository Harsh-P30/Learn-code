#include<iostream>
using namespace std;
int main()
{
    int arr[2][3];                                              //{1  2  4}
                                                                //{4  5  4}
    //size of array

    int row=sizeof(arr)/sizeof(arr[0]);  // size of row = total size of array divide size of a row
    cout<<"row size :- " <<row<<endl;
    int column = sizeof(arr[0])/sizeof(arr[0][0]);  // size of column=size of a row divide by size of a element
    cout<<"column size :- " <<column<<endl;


    //insert into array
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"position at you insert" <<"("<<i<<") "<<"("<<j<<") :- ";
            cin>>arr[i][j];
        }
    }

    // Print Matrix
    cout<<endl<<"Your inserted matrix: -"<<endl;
    for(int i=0;i<row;i<<i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<"  ";
        } cout<<endl;
    }
 
 
 return 0;
}