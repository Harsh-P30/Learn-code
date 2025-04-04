// 3. Count the frequency of each character in a string.

#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    string str="hellooojhj";
    unordered_map<char,int> freqMap;

    for(int i=0;i<sizeof(str)/sizeof(str[0]);i++){
        freqMap[str[i]]++;
    }
    for(auto it:freqMap){
        cout<<it.first <<":"<<it.second<<endl;
    }
}