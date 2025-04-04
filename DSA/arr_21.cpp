// 21. Rotate a matrix by 90 degrees clockwise.

#include<iostream>
using namespace std;
int main()
{   
    
    int firstRow;
    int firstColumn;

    cout<<"Enter no of rows :- ";
    cin>>firstRow;
    cout<<"Enter no of Column :- ";
    cin>>firstColumn;

    int arr[firstRow][firstColumn];
    for(int i=0;i<firstRow;i++){
        for(int j=0;j<firstColumn;j++){
            cout<<"position at you insert" <<"("<<i<<") "<<"("<<j<<") :- ";
            cin>>arr[i][j];
        }
    }

        cout<<"your matrix :- "<<endl;
        for(int i=0;i<firstRow;i++){
            for(int j=0;j<firstColumn;j++){
                cout<<arr[i][j]<<"  ";
            } cout<<endl;
        }

        // let's transpose of matrix;
        int secRow=firstColumn;
        int secColumn=firstRow;
        int transArr[secRow][secColumn];

        for(int i=0;i<firstRow;i++){
            for(int j=0;j<firstColumn;j++){
                transArr[j][firstRow-i-1]=arr[i][j];
            }
        }
        cout<<endl<<"Matrix After 90 degree clockwise rotation :- "<<endl;
        for(int i=0;i<secRow;i++){
            for(int j=0;j<secColumn;j++){
                cout<<transArr[i][j]<<"  ";
            }cout<<endl;
        }
 
 
    return 0;
}