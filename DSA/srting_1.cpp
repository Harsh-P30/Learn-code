// Reverse a string.

#include<iostream>
using namespace std;

int main(){
    string str="hello";
    int i;
    char temp;
    int size=str.size();

    for (i=0;i<size/2;i++){
        temp=str[i];
        str[i]=str[size-1-i];
        str[size-1-i]= temp;
    }

    cout<<str;

}


// #include<iostream>
// #include<string>
// using namespace std;

// string word(string text,int n){
//     for(int i=0;i<n/2;i++){
//         char temp=text[i];
//         text[i]=text[n-1-i];
//         text[n-1-i]=temp;
//     }

//     return text;

    
// }

// int main(){
// string result=word("hello",5);
// cout<<result;
// }
