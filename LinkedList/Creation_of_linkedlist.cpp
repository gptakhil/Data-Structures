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
};

int main()
{
    #create a instance of class Node name as obj1
    Node obj1;

    #creating three pointers initial value = NULL
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    # allocating heap memory
    head = new Node();
    second = new Node();
    third = new Node();

    #Inserting data and linked to the next pointer
    head -> data = 1;
    head -> next=second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    #traverse data and print it
    obj1.printList(head);

    return 0;


}
