#include<iostream>
using namespace std;

                                                    // 1st way to refer pointer(Passing by Reference):-  

// int pointer(int *num1,int *num2){  // always mention data type of pointer
//     *num1=10;
// }
// int main(){
//     int a=4,b=5;
//     pointer(&a,&b);
//     cout<<a<<endl;
//     cout<<&a;
// }

                                                    // 2nd way to refer pointer:-

// int pointer(int &num){
//     num=32;
// }

// int main(){
//     int a=12;
//     int *x=&a;
//     pointer(*x);
//     cout<<a;
// }

                                                    // Returning Pointers from Functions
            
// int * pointer( int &num){
//     num=12;
//     return &num;
// }
// int main(){

//     int a=5;
//     int *x=&a;
//     int *n=pointer(*x);

//     cout<<n<<endl; // address of pointer
//     cout<<&n<<endl;//address of n
//     cout<<*n;      //data in n

// }


                                                    //Arithmetic Operation

int arithmetic( int &num1,int &num2){

    cout<<num1+num2<<endl; //addtion
    cout<<num1-num2<<endl; //subtraction
    cout<<num1*num2<<endl; //multiplication
    cout<<num1/num2;       //divide
}

int main(){
    int a=12;
    int b=23;
    int *x=&a;
    int *y=&b;
    arithmetic(*x,*y);
}



