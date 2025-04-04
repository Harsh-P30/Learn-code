// 4. Find the first non-repeating character in a string.
#include<iostream>
using namespace std;


char NonRepeating(string str){
    char res;
    for(int i=0;i<str.size()-1;i++){
        for(int j=0;j<str.size()-1;j++){
            if(str[i]!=str[j]&&i!=j){
                 res = str[i];
            }
        }return res;
    } 
    
}
 
int main()
{
    char result=NonRepeating("helloh");
    cout<<result;
 return 0;
}