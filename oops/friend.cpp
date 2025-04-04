#include<iostream>
using namespace std;
class dost{
    private:
    void display(){
        cout<<"mere dost ne bulaya h mujhe";
    }
    friend class dikha;    
};
class dikha{
    public:
    void disp(dost& t){
        t.display();
    }
};
 
int main()
{   
    dost obj1;
    dikha obj2;
    obj2.disp(obj1);

 
 return 0;
}