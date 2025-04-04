// 6. Find the longest common subsequence between two strings.

#include<iostream>
#include<string>
using namespace std;
string LongestCommonSequence(string str1,string str2){
    string str;
    for(int i=0;i<str1.size();i++){
        for(int j=i;j<str1.size();j++){
            if(str1[i]==str2[j]){
                str=str1[i];
            }
        }
        cout<<str;
    }
};
 
int main()
{
    LongestCommonSequence("Hello","Lelli");
 
 return 0;
}