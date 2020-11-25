#include<iostream>

using namespace std;
void Insertion(int* arr, int pos, int item, int N)
{
    for(int i = N; i>=pos;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[pos] = item;
    for(int i=0; i<N;i++)
    {
        cout<<arr[i]<<endl;
    }
    N = N+1;

}
int main()
{
    int arr[6]={10,20,40,30,60},pos,item;
    int N=sizeof(arr)/sizeof(arr[0]);
    cout<<"Initial array"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Enter the element you want to insert"<<endl;
    cin>>item;
    cout<<"Enter the position"<<endl;
    cin>>pos;
    Insertion(arr,pos,item,N);
    return 0;
}
