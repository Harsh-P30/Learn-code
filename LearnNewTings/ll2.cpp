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
    //Destructor
    ~Node(){                 // Memory free
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next =NULL;
        }
        cout<<"Memory free "<<data<<endl;
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

// Insert at last

void InsertAtTail(Node *&tail,int d){
    Node* temp = new Node(d);// Calls the Node constructor with value d. Dynamically allocates memory using new. temp now points to this new node.
    tail->next= temp; // make temp as tail 
    tail = temp;
}

void InsertAtPosition(Node *&head, Node *&tail, int pos , int d){
    if(pos==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt =1;
    while (cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return;
    }


    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next= nodeToInsert;
    
}

void deleteNode(int pos ,Node*&head){

    if(pos==1){
        Node* temp =head;
        head= head->next;
        temp->next=NULL;
        delete temp;
    }else{
        Node*curr =head;
        Node*prev =NULL;

        int cnt = 1;
        while(cnt<pos){
            prev=curr;
            curr = curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }



}


void print(Node *&head) // take the Head
{
    Node *temp = head;   // new node create put head into it
    while (temp != NULL) // temp != NULL
    {
        cout << temp->data << " -> "; // print data of temp
        temp = temp->next;            // move temp to next
    }
    cout<<endl;
}

int main()
{
    Node *node1 = new Node(10); // create a Node ** mandatory
    Node *head = node1;         //  set just created node as Head
    Node *tail = node1;         //  set just created node as Tail
    InsertAtHead(head, 12);     // call function giving argument as Head and value
    InsertAtHead(head, 15);

    InsertAtTail(tail, 85);
    InsertAtPosition(head,tail, 5,89);
    print(head);
    InsertAtPosition(head,tail, 5,9);
    InsertAtTail(tail, 8);
    print(head);

    deleteNode(3,head);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(5,head);
    print(head);
}