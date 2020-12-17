
#include <iostream>

using namespace std;
class Node
{
    public:
        int data;
        Node* next;

        void printList(Node* n)
        {
            while(n!=NULL)
            {
                cout << n->data << " ";
                n = n->next;
            }
        }

        void delete_node(Node** head_ref,int key)
        {
            //store head node
            Node* temp = *head_ref;
            Node* prev = NULL;

            //If head node itself holds the key to be deleted
            if(temp != NULL && temp->data == key)
            {
                *head_ref = temp->next; //changed head
                delete temp;            //free old
                return;
            }

            //Else Search for the key to be deleted
            //keep track of the previous node
            //need to change prev->next

            while(temp != NULL && temp-> data!=key)
            {
              prev = temp;
              temp = temp->next;

            }
            //If key was not present in linked list
            if(temp == NULL)
            {
                return;
            }
            //Unlike the node from linked list
            prev -> next = temp->next;

            //free memory
            delete temp;


        }
};

int main()
{
    //create a instance of class Node name as obj1
    Node obj1;

    //creating three pointers initial value = NULL
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocating heap memory
    head = new Node();
    second = new Node();
    third = new Node();

    //Inserting data and linked to the next pointer
    head -> data = 1;
    head -> next=second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    //traverse data and print it
    cout<<"Creating a linkedlist"<<endl;
    obj1.printList(head);
    cout<<endl<<"Linked list after deleting 2:"<<endl;
    obj1.delete_node(&head,2);
    obj1.printList(head);

    return 0;


}
