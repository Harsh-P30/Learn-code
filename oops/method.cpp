#include<iostream>
using namespace std;
class method{
    public:
    void bahar();

    void display(){
        cout<<"andr hu bhai";
    }
    
};
void method :: bahar(){   // outside method should initilize like this (with class name)
    cout<<"bahar hu my to"<<endl;
}
 
int main()
{
    method obj;
    obj.bahar();
    obj.display();
 
 return 0;
}