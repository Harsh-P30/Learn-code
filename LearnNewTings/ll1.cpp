#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
}


/*

Let’s break it down line by line:

cpp

class Node
👉 This declares a class named Node. A class is a blueprint for creating objects (in this case, nodes of a linked list).

cpp

{
public:
👉 Marks the start of the public section — members (variables and functions) under this can be accessed from outside the class.

cpp

    int data;
👉 Declares an integer variable named data inside the class.
This will store the value (or payload) of the node.

cpp

    Node *next;
👉 Declares a pointer named next of type Node*.
This will point to the next node in the linked list (or NULL if it’s the last node).

cpp

    Node(int data)
👉 This is a constructor — a special function that runs when you create a new Node object.
It takes an int data as a parameter.

cpp

    {
        this->data = data;
👉 Inside the constructor:
this->data refers to the class’s data member, while data (on the right) is the parameter passed into the constructor.
This line assigns the passed value to the node’s data field.

cpp
        this->next = NULL;
    }
👉 This sets the node’s next pointer to NULL by default, meaning when a node is created, it doesn’t point to any other node yet.



*/