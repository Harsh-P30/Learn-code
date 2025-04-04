#include<iostream>
#include<bitset>
using namespace std;
 
int main()
{
    int a=10;
    int b=2;
    bitset<32> binary(a);
    bitset<32> bin(b);

    cout<<"binary representaion of a(10) is :- "<<binary<<endl;
    cout<<"binary representaion of 2(20) is :- "<<bin<<endl;
    int c= a & b;
    cout<<"bitwise and(&) of a and b = " <<c<<endl;
    int d= a | b;
    cout<<"bitwise or(|) of a or b = " <<d<<endl;
    int e= a ^ b;
    cout<<"bitwise xor(^) of a or b = " <<e<<endl;
    cout<<"bitwise or(~) of a = "<<~a<<endl;
    int f=a<<1;
    cout<<"left shif(<<) by 1:- "<<f<<endl;
    int g=a>>1;
    cout<<"right shift(>>) by 1:- "<<g<<endl;


 
 return 0;
}