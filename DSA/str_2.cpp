// // 2. Check if a string is a palindrome.
// #include<iostream>
// #include<string>
// #include<typeinfo>
// using namespace std;

// int palindrom(string text){
//     string old_str=text;

//     int size=text.size();
//     for(int i=0;i<size/2;i++){
//         char temp=text[i];
//         text[i]=text[size-i-1];
//         text[size-i-1]=temp;
//     }

//     if(text==old_str){
//         return 1;
//     }
//     else return 0;
// }

// int main(){
//     int result=palindrom("helloolleh");
//     if(result=1){
//         cout<<"it is palindrome";
//     }

// }


#include<iostream>
using namespace std;
#include<string>

int palindrom(string str){

    for(int i=0;i<str.size()/2;i++){
        if(str[i]==str[str.size()-1-i]){
            return 1;
        }
    }
};
 
 
int main()
{
    int result=palindrom("hellolleh");

    if(result==1){
        cout<<"pali";

    }
 return 0;
}