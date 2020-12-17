
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
        int getNth_node(Node* head_ref,int index)
        {
            Node* current = head_ref;
            int count=0;
            while(current!=NULL)
            {
                if(count==index)
                {
                    return (current->data);
                }
                count++;
                current = current->next;
            }
        }


};

int main()
{
    int index;
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
    cout<<endl<<"Enter the index number"<<endl;
    cin>>index;
    cout<<"Element at index "<<index<<" is"<<endl<<obj1.getNth_node(head,index);

    return 0;


}


