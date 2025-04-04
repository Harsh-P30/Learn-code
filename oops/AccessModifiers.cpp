#include<iostream>
using namespace std;
class AccessModifiers
{

    public:
    void display(){
        cout<<"ki haal chal";
    }

    private:
    void disp(){
        cout<<"sorry ham nhi dikha skte hai gupt hai";
    }

    protected:
    void dikha(){
        cout<<"ohh no we are in protected member";
    }
};
 
int main()
{
    AccessModifiers obj;
    obj.display();
    obj.disp(); // error due to direct access of private member
    obj.dikha(); // error dur to direct access of protected member
 
 return 0;
}