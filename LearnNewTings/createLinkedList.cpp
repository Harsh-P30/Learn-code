#include<iostream>
using namespace std;

 struct Node{ // define a Node 
    int data;
    Node* next;  //A pointer that stores the address of the next node in the list.

    Node(int val){ //Constructor
        data=val;  // When a new node is created, this constructor initializes "data = val"
        next=NULL; // It sets "next = NULL" since a new node doesn’t point to anything initially.
    }
 };

//class for linked list;

class LinkedList{
    public:
    Node* head; //head is a pointer that stores the first node (head) of the linked list.
    LinkedList() { head = NULL;} // Constructor: Initializes the head pointer as NULL (an empty linked list).

    void insertAtBiginning(int val){
        Node* newNode = new Node(val); // new Node(val) → Creates a new node with "data = val".
        newNode->next=head;  // " newNode->next = head;" → The new node’s next pointer now points to the current head (the first node in the list).
        head=newNode; //Updates the head pointer to point to the new node, making it the first element.
    }

    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){ //  If head == NULL, it means the linked list is empty.
            head = newNode;  // Set head = newNode, making the new node the first element.
            return;
        }

        Node* temp=head;
        while(temp->next!=NULL){ // Otherwise, traverse the list to find the last node (temp->next == NULL).
            temp=temp->next; // 
        }
        temp->next=newNode; // Attach the new node at the last node (temp->next = newNode).


    }

    void deleteNode(int val){
        if(head == NULL) return; //  If the linked list is empty, return immediately (no deletion needed).
        if(head->data==val){  //  If the first node itself has the value to be deleted:
            Node* toDelete=head; // Store the current head in "toDelete".
            head=head->next; // Move head to the next node "(head = head->next)".

            delete toDelete; // Free the memory (delete toDelete).
            return;
        }

        Node* temp=head;
        while(temp->next != NULL &&  temp->next->data != val){ // Traverse the list to find the node that contains val. temp->next->data == val.
            temp = temp->next;
        }

        if(temp->next == NULL) return; //  If the value is not found, return (no deletion needed).

        Node* toDelete = temp->next;  //Storing its address in toDelete.
        temp->next = temp->next->next; //Linking the previous node to the next node"(temp->next = temp->next->next)".

        delete toDelete; //Freeing the deleted node’s memory.


    }

    void display(){
        Node* temp=head;
        while(temp!= NULL){ //Start from head and traverse the list using while (temp != NULL).
            cout<<temp->data <<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};



int main() {
    LinkedList list;
    list.insertAtBiginning(5);
    list.insertAtBiginning(10);
    list.insertAtTail(15);
    list.display();

    list.deleteNode(10);
    list.display();
}