#include<iostream>
using namespace std;
#include<string>

string st(string st1,string st2){
    cout<<"Concatenation of strings :- "<< st1+st2<<endl;
    cout<<"-------------------------------------some function------------------------------------"<<endl;
    cout<<"Append something in string and hello became " <<st1.append("!!")<<endl;
    cout<<"Substring of string(hello):- "<<st1.substr(2,3)<<endl;
    cout<<"find index of i in 'hello' is :- "<<st1.find("l")+1<<endl;
    st1.replace(2,1,"te");
    cout<<"after replacing :- "<<st1<<endl;
}

int main(){
    st("hello ","world");
}