//A complete working C++ program to demonstrate
//all insertion methods on Linked List

#include <iostream>

using namespace std;
class Node
{
    public:
        int data;
        Node* next;
        //function to add a new node in front
        void push(Node **head_ref,int newdata)
        {
            Node* new_node = NULL;

            new_node = new Node();
            new_node -> data = newdata;
            new_node -> next = (*head_ref);
            (*head_ref) = new_node;
        }
        //function to add a newnode in given node

        void insertAfter(Node *prev_node,int newdata)
        {
            if(prev_node == NULL)
            {
                cout << "the given previous node cannot be null";
            }

            Node* new_node = NULL;
            new_node = new Node();

            new_node -> data = newdata;
            new_node -> next = prev_node->next;
            prev_node -> next = new_node;
        }

        //function to add node at the last of the list
        void append(Node** last_node_ref,int newdata)
        {
            Node* new_node = NULL;
            Node* last = (*last_node_ref);

            new_node = new Node();
            new_node -> data=newdata;
            new_node -> next=NULL;

            if(*last_node_ref==NULL)
            {
                *last_node_ref = new_node;
                return;
            }

            while(last -> next!=NULL)
            {
                last = last -> next;
            }

            last -> next = new_node;
            return;
        }
        //function to print the linkedlist
        void printList(Node* n)
        {
            while(n!=NULL)
            {
                cout << n->data << " ";
                n = n->next;
            }
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


    //adding a node in front of the list
    obj1.push(&head,20);
    //adding a node in between the list
    obj1.insertAfter(second,12);
    //adding a node at the last in the list
    obj1.append(&third,50);
    //traverse data and print list
    obj1.printList(head);

    return 0;


}

