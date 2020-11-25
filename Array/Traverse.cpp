#include<iostream>

using namespace std;
void Traverse(int* arr,int LB,int UB)
{
    for(int i=LB; i<UB;i++)
    {
        cout <<arr[i]<<endl;
    }
}
int main()
 {
    int arr[]={10,20,30,40,50};
    int LB=0;
    int UB=sizeof(arr)/sizeof(arr[0]);

    Traverse(arr,LB,UB);
    return 0;
    }
