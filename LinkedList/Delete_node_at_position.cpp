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
        //function that will delete the node at given position
        void delete_node(Node** head_ref,int position)
        {
            //if linkedlist is empty
            if(*head_ref==NULL)
            {
                return;
            }
            Node* temp= *head_ref;
            //if position id 0
            if(position == 0)
            {
                *head_ref = temp -> next;
                delete temp;
                return;
            }
            for(int i=0; temp!=NULL && i<position-1;i++)
            {
                temp = temp->next;
            }
            //If position is greater than number of nodes
            if(temp==NULL || temp->next==NULL)
            {
                cout<<"Enter the valid position";
                return;
            }
            // Store pointer to the next of node to be deleted
            Node* next = temp->next->next;
            delete temp->next;//free memory
            temp->next=next;//Unlink the list

            return;

        }
};

int main()
{
    int pos;
    //create a instance of class Node name as obj1
    Node obj1;

    //creating three pointers initial value = NULL
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;

    //allocating heap memory
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    //Inserting data and linked to the next pointer
    head -> data = 1;
    head -> next=second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 4;
    fourth -> next = NULL;

    //traverse data and print it
    cout<<"Initial linkedlist"<<endl;
    obj1.printList(head);

    cout<<endl<<"Enter the position which has to be delete"<<endl;
    cin>>pos;

    //delete a node at given point
    obj1.delete_node(&head,pos);

    //print after deleting the node
    cout<<endl<<"linked list after deleting the given position"<<endl;
    obj1.printList(head);
    return 0;


}

