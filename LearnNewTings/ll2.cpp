// Example of Insert Values at Head or Add values at Head.
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int d) // Insert at Head;
// Node *&head → a reference to a pointer to the head node.
// Takes a reference to a pointer head (Node *&head) → this allows the function to modify the actual head pointer in the calling code.
// Takes an integer d → this is the data value to insert.
{
    // new Node create
    Node *temp = new Node(d);
    // Calls the Node constructor with value d. Dynamically allocates memory using new. temp now points to this new node.
    temp->next = head;
    // Sets the next pointer of the new node (temp) to point to the current head node.
    head = temp;
    // Makes head point to the new node (temp).
}

void print(Node *&head) // take the Head
{
    Node *temp = head;   // new node create put head into it
    while (temp != NULL) // temp != NULL
    {
        cout << temp->data << " -> "; // print data of temp
        temp = temp->next;            // move temp to next
    }
}

int main()
{
    Node *node1 = new Node(10); // create a Node ** mandatory
    Node *head = node1;         //  set just created node as Head
    InsertAtHead(head, 12);     // call function giving argument as Head and value
    InsertAtHead(head, 15);
    print(head);
}