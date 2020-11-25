#include <iostream>

using namespace std;
int BinarySearch(int* arr,int N,int item)
{
    int mid=0,low=1,high=N,pos=0;
    while (low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid]==item)
        {
            pos = mid;
            return pos;
        }
        else if(item>arr[mid])
        {
            low=mid-1;
        }
        else
        {
            high=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={10,20,25,30,50,100},N=sizeof(arr)/sizeof(arr[0]);
    int item,location;

    for (int i=0; i<N; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Enter the item you want to search"<<endl;
    cin >> item;

    location=BinarySearch(arr,N,item);
    cout<<"The location of item is"<<endl<<location;
    return 0;

}
