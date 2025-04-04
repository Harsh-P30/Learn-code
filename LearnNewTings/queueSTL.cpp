#include<iostream>
#include<queue>
using namespace std;
int main()
{
 
    queue<int>createQueue;

    createQueue.push(2);
    createQueue.push(3);
    createQueue.push(4);
    createQueue.push(5);
    createQueue.push(6);

    while (createQueue.empty()!=1)
    {
        cout<<createQueue.front()<<" ";
        createQueue.pop();
    }
    cout<<endl;
    if(createQueue.empty()!=0){
        cout<<"queue is empty";
    }else{
        cout<<"queue is not empty";
    }

 return 0;
}