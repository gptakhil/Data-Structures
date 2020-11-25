
#include <iostream>
#define SIZE 10
using namespace std;

void insertion_sort(int arr[], int n)
{
    int j,item;
    for(int i=1; i<n; i++)
    {
        item = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > item)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = item;
    }
}


int main()
{
    int  arr[SIZE], i, n;
    cout << "Enter how many elements"<<endl;
    cin >> n;
    cout << "Enter the elements"<<endl;

    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"The elements in array are"<<endl;
    for (i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }

    insertion_sort(arr,n);

    cout <<endl<< "Array after insertion  sort"<<endl;

    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
