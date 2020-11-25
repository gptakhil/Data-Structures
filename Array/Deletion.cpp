#include<iostream>

using namespace std;
void Deletion(int* arr,int pos,int item,int N)
{
    for(int i=pos;i<N;i++)
    {
        arr[i]=arr[i+1];
    }
    N=N-1;
    cout<<"Array after deleting element"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
   int arr[]={10,20,30,40,50};
   int item,pos;
   int N=sizeof(arr)/sizeof(arr[0]);

   for(int i=0; i<N; i++)
   {
        cout<<arr[i]<<endl;
   }
   cout<<"Enter the element that has to be deleted "<<endl;
   cin >> item;
   cout<<"Enter the position of the element "<<endl;
   cin>>pos;
   Deletion(arr,pos,item,N);
   return 0;
}
