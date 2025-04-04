#include<iostream>
using namespace std;

class Add{
    public:
    void display(){                 //member method
                                    //Methods are functions that belongs to the class.
        cout<<"we are from class";
    }
};
 
int main()
{
    Add obj;        //object
    obj.display();  //access through object

 
 return 0;
}