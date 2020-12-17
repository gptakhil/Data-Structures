
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
        bool search_element(Node* head_ref,int key)
        {
            Node* current = head_ref;
            while(current!=NULL)
            {
                if(current->data == key)
                {
                    return true;
                }
                current = current->next;
            }
            return false;
        }


};

int main()
{
    int element;
    //create a instance of class Node name as obj1
    Node obj1;

    //creating three pointers initial value = NULL
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;
    Node* fifth = NULL;
    Node* sixth = NULL;

    //allocating heap memory
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();
    sixth = new Node();

    //Inserting data and linked to the next pointer
    head -> data = 1;
    head -> next=second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 10;
    fourth -> next = fifth;

    fifth -> data = 7;
    fifth -> next = sixth;

    sixth -> data = 15;
    sixth -> next = NULL;

    //traverse data and print it
    cout<<"Creating a linkedlist"<<endl;
    obj1.printList(head);
    cout<<endl<<"Enter the element which has to be search in the list"<<endl;
    cin>>element;
    obj1.search_element(head,element)?cout<<"yes element is present" : cout<<"Element is not present";

    return 0;


}

